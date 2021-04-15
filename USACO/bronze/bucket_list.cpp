#include <iostream>
using namespace std;

int main(){
    int N, S[100],E[100],B[100];
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>> S[i]>>E[i]>>B[i];
    }
    int max_buckets = 0;
    for (int time = 0; time < 1000; time++)
    {
        int buckets_available = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i]<=time && time<=E[i])
            {
                buckets_available+= B[i];
            }
            
        }
        max_buckets= max(max_buckets,buckets_available);
    }
    cout<<max_buckets<<endl;
    
    
}