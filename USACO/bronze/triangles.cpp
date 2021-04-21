#include <iostream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("triangles.in","r",stdin);
	freopen("triangles.out","w",stdout);
    int N;
    cin>>N;
    int X[N];
    int Y[N];
    for (int i = 0; i < N; i++)
    {
        cin>>X[i]>>Y[i];
    }
    int res =-1;
    for (int i = 0; i <N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (Y[i]==Y[j] && X[i]==X[k])
                {
                    int area = abs((X[j]-X[i]) * (Y[k]-Y[i]));
                    res = max(area,res);
                }                
            }            
        }        
    }
    cout<<res<<endl;

}