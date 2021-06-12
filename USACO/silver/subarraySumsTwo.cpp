#include <iostream>

using namespace std;

int main(){
    int n;
    int x;
    int ans = 0;
    cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == x)
            {
                ans+=1;                
            }            
        }        
    }
    cout<< ans<< endl;
    
    
}