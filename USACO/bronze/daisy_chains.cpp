#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int res=0;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j <N; j++)
        {
            bool isgood = false;
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum+=arr[k];
            }
            for (int k = i; k <= j; k++)
            {
                if (arr[k]*(j-i+1)==sum){
                    isgood=true;
                }
            }
            if (isgood)
            {
                res+=1;
            }
            
        }        
    }
    cout<<res<<endl;
}