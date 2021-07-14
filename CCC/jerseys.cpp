#include <iostream>


using namespace std;

int main(){
    int jerseys[1000001];
    int j;
    int a;
    int ans =0;

    cin>>j;
    cin>>a;
    for (int i = 0; i < j; i++)
    {
        char c;
        cin>>c;
        if (c=='L')
        {
            jerseys[i] = 3;
        }
        if (c=='M')
        {
            jerseys[i] = 2;
        }
        if (c=='S')
        {
            jerseys[i] = 1;
        }
    }

    for (int i = 0; i < a; i++)
    {
        int index;
        char c;
        int targetSize;
        cin>>c>>index;
        if (c=='L')
        {
            targetSize = 3;
        }
        if (c=='M')
        {
            targetSize = 2;
        }
        if (c=='S')
        {
            targetSize = 1;
        }
        int size = jerseys[index-1];
        if (size>=targetSize)
        {
            jerseys[index-1] = -1;
            ans+=1;
        }        
    }

    cout<<ans<<endl;
    
    
    
}