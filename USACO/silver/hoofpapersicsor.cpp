#include <iostream>

using namespace std;

int main(){
    // freopen("hps.in", "r", stdin);
	// freopen("hps.out", "w", stdout);
    int n;
    int ans = 0;
    cin>>n;
    int preH[n+1];
    int preS[n+1];
    int preP[n+1];
    for (int i = 1; i <= n; i++)
    {
        preH[i] =preH[i-1];
        preS[i] =preS[i-1];
        preP[i] =preP[i-1];
        char move;
        cin>>move;
        if (move=='H')
        {
            preH[i]++;
        }
        else if (move=='S')
        {
            preS[i]++;
        }
        else if (move=='P')
        {
            preP[i]++;
        }        
    }
    for (int i = 1; i <= n; i++)
    {
        int beforeI = max(preH[i],max(preS[i],preP[i]));
        int afterI = max(preH[n]-preH[i],max(preS[n]-preS[i],preP[n]-preP[i]));
        ans = max(ans, beforeI+afterI);
    }
    cout<<ans<<endl;
    
}