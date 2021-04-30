#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("breedflip.in","r",stdin);
	freopen("breedflip.out","w",stdout);
    int N;
    cin>>N;
    string A;
    string B;
    cin>>A;
    cin>>B;
    int ans = 0;
    bool swap_on = false;
    for (int i = 0; i < N; i++)
    {
        char a = A[i];
        char b = B[i];
        if (a==b)
        {
            swap_on=false;
        }
        if (a!=b)
        {
            if (swap_on == false)
            {
                ans +=1;
            }                        
            swap_on = true;       
        }        
    }
    cout<<ans<<endl;    
}