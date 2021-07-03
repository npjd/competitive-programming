#include <iostream>

using namespace std;

int main(){
    int m;
    int n;
    int k;
    cin>>m;
    cin>>n;
    cin>>k;
    
    int rows[m];
    int cols[n];

    for (int i = 0; i < k; i++)
    {
        char ch; 
        int idx;
        cin >> ch >> idx;
        idx--;
        if (ch =='R')
        {
            rows[idx] ^=1;
        }else
        {
            cols[idx] ^=1;
        }                
    }
    int ans =0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rows[i] ^ cols[j])
            {
                ans+=1;
            }
            
        }        
    }

    cout<<ans<<endl;
    
    
}