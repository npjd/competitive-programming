#include <iostream>

using namespace std;

int main(){
    int w,n;
    cin>>w;
    cin>>n;
    int carts[n];
    for (int i = 0; i < n; i++)
    {
        cin>>carts[i];
    }

    int totalMass = 0;
    int cartsCounted=0;

    for (int i = 0; i < n; i++)
    {
        totalMass += carts[i];
        
        if (totalMass>w)
        {
            break;
        }
        cartsCounted++;
        if (cartsCounted>=4)
        {
            totalMass-=carts[cartsCounted-4];
        } 
    }

    cout<<cartsCounted<<endl;
    

}

