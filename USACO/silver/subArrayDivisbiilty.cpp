#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum +=a[j];
            if (sum%n==0)
            {
                ans+=1;
            }
            
        }        
    }

    cout<<ans<<endl;
    
    
}