#include <iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int limit[100],bessie [100];
    int start =0;
    for (int i = 0; i < N; i++)
    {
        int length, speed; cin>>length>>speed;
        for (int i = start; i < start+length; i++)
        {
            limit[i]=speed;
        }
        start+=length;
    }
    start =0;
    for (int i = 0; i < M; i++)
    {
        int length, speed; cin>>length>>speed;
        for (int i = start; i < start+length; i++)
        {
            bessie[i]=speed;
        }
        start+=length;
    }
    int ans =0;
    for (int i = 0; i < 100; i++)
    {
        ans = max(ans, bessie[i]-limit[i]);
    }
    cout<<ans<<endl;
}