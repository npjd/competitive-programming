#include <iostream>

using namespace std;

int main(){
    int jerseys[100001];
    int j;
    int a;
    cin>>j;
    cin>>a;
    for (int i = 1; i <= j; i++)
    {
        char c;
        cin>>c;
        if(c=='S')
            jerseys[i]=0;
        else if(c=='M')
            jerseys[i]=1;
        else if(c=='L')
            jerseys[i]=2;
    }
    int ans = 0;
    for (int i = 1; i <= a; i++)
    {
        int num;
        char size;
        cin>>size>>num;
        int s;
        if(size=='S')
            s=0;
        else if(size=='M')
            s=1;
        else if(size=='L')
            s=2;
        if (jerseys[num]>=s)
        {
            ans++;
            jerseys[num]=-1;
        }        
    }
    cout<<ans<<endl;
    
}