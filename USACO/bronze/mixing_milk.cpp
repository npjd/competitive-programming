#include <iostream>

using namespace std;

int c1,c2,c3,m1,m2,m3;
   
void pour(int c, int& milk1, int& milk2){
    int amt;
    if (milk1+milk2>c)
    {
        amt = c-milk2;
    }else
    {
        amt = milk1;
    }
    milk1-= amt;
    milk2+=amt;
}

int main(){
    cin>>c1;
    cin>>m1;
    cin>>c2;
    cin>>m2;
    cin>>c3;
    cin>>m3;
    for (int i = 0; i < 33; i++)
    {
        pour(c2,m1,m2);
        pour(c3,m2,m3);
        pour(c1,m3,m1);
    }
    pour(c2,m1,m2);
    cout<<m1<< " "<< m2<< " "<<m3<<endl;
    
}