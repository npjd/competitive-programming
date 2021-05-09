#include <iostream>
#include <fstream>

using namespace std;
//dfs problem
int main(void){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("factory.in","r",stdin);
	freopen("factory.out","w",stdout);
    int N, outgoing[101], incoming[101];
    cin>>N;
    for (int i=0; i<N-1; i++) {
        int a, b;
        cin >> a >> b;
        outgoing[a]++;
        incoming[b]++;
    }
    int res = -1;
    for (int i = 1; i <= N; i++)
    {
        if (outgoing[i]==0 && res!=-1)
        {
            res=-1;
            break;
        }
        if (outgoing[i]==0)
        {
            res=i;
        }          
    }
    cout<<res<<endl;
    
}