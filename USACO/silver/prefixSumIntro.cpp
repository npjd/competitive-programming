#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, Q;
	cin >> N >> Q;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }
    int prefixSum[N+1];
    for (int i = 0; i < N; i++)
    {
        prefixSum[i+1] =a[i] +prefixSum[i];
    }
    for (int i = 0; i < Q; i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<prefixSum[r]-prefixSum[l]<<endl;
    }
}