#include <iostream>

using namespace std;

int main(){
    bool add = true;
    int byron = 0;
    int nikky =0;
    int a;
    int b;
    int c;
    int d;
    int s;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>s;
    for (int i = 0; i < s; i++)
    {
        if (add ==true)
        {
            nikky +=a;
            byron +=c;
            add= false;
        }else if (add==false){
            nikky -=b;
            byron-=d;
            add = true;
        }
    }
    if (nikky==byron)
    {
        cout<<"Tied"<<endl;
    }else if (nikky>byron)
    {
        cout<<"Nikky"<<endl;
    }else
    {
        cout<<"Byron"<<endl;
    }                
}