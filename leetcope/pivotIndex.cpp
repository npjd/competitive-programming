#include <iostream>
#include <vector>
// what?
using namespace std;

void fillPrefixSum(int arr[], int n, int prefixSum[])
{
    prefixSum[0] = arr[0];
 
    // Adding present element
    // with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 7, 3, 6, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixSum[n];
 
    fillPrefixSum(arr, n, prefixSum);
    

    for (int i = 0; i < n; i++)
    {
        if ((prefixSum[i]*2)+arr[i+1]==prefixSum[n-1])
        {
            cout<<i+1<<endl;
            break;
        }
        
    }
    
}



