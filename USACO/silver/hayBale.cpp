#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;

    int bales[n];
    for (int i = 0; i < n; i++)
    {
        bales[i] =0;
    }
    

    for (int i = 0; i < k; i++)
    {
        int a;
        int b;
        cin>>a>>b;
        bales[a-1] +=1;
        bales[b+1] -=1;
    }

    int total[n];
    total[0] = bales[0];
    for (int i = 0; i < n; i++)
    {
        total[i] = total[i-1] + bales[i];
    }

    sort(total,total+n);

    cout<<total[n/2]<<endl;
    
    
    
}