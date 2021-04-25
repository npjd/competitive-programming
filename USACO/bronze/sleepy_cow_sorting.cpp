#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N];
    int ans= N-1;
    for (int i = 0; i < N; i++)
    {
        cin>>a[i];
    }
    for (int i = N-2; i>=0; i--)
    {
        if (a[i]<a[i+1])
        {
            ans=i;
        }else
        {
            break;
        }                
    }
    cout<<ans<<endl;    
}