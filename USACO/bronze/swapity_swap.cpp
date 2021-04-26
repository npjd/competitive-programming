#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("swap.in","r",stdin);
	freopen("swap.out","w",stdout);
    int N;
    int K;
    cin>>N>>K;
    int pos[100];
    for (int i = 0; i < N; i++)
    {
        pos[i]= i+1;
    }
    int start,end;
    cin>>start>>end;
    start--;
    end--;
    int start2,end2;
    cin>>start2>>end2;
    start2--;
    end2--;

    for (int i = 0; i < K; i++)
    {
        int count =0;
        for (int j = start; j <end/2 + 1; j++)
        {
            swap(pos[j],pos[end-count]);
            count+=1;
        }
        count =0;
        for (int j = start2; j <end2/2 + 1; j++)
        {
            swap(pos[j],pos[end2-count]);
            count+=1;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout<<pos[i]<<endl;
    }
    
}