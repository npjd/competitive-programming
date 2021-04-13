#include <iostream>


using namespace std;

int n,a[100],b[100],g[100];

int optimal(int i){
    int count = 0;
    int shell_pos = i;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==shell_pos)
        {
            shell_pos= b[i];
        }else if (b[i]==shell_pos)
        {
            shell_pos=a[i];
        }
        if (shell_pos == g[i])
        {
            count +=1;
        }
        
    }
    return count;
    
}

int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        cin>>b[i];
        cin>>g[i];
    }
    int high = 0;
    for (int i = 0; i < 3; i++)
    {
        high = max(high,optimal(i));
    }
    cout<<high<<endl;
}