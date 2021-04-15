#include <iostream>
#include <vector>

using namespace std;


int main(){
    int N;
    cin>>N;

    vector<int> cows(N);
    vector<int> shuffle(N);
    vector<int> ans(N);
    
    for (int i = 0; i < N; i++)
    {
        cin>>shuffle[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin>>cows[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int switch_num;
            for (int k = 0; k < N; k++)
            {
                if (shuffle[k]-1==j)
                {
                    switch_num = k;
                    break;
                }
            }
            ans[switch_num] = cows[j];   
        }
        for (int l = 0; l < N; l++)
        {
            cows[l]=ans[l];
        }        
    }
    
    for (int i = 0; i < N; i++)
    {
        cout<<ans[i]<<endl;
    }

}