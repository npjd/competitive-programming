#include <iostream>

using namespace std;
int main(){

    int N, a[100]; cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>a[i];
    }
    sort(a,a+N);
    int num = 0;
    int res=0;
    for (int i = 0; i < N; i++)
    {
        if (a[i]==num)
        {
            continue;
        }else{
            num = a[i];
            res+=1;
        }
    }
    cout<<res<<endl;
    
    
}