#include <iostream>

using namespace std;

int main(){
    int X,Y,M; cin>>X>>Y>>M;
    int max_milk = 0;
    int milk = 0;
    int x = M/X;
    int y = M/Y;
    for (int i = 0; i < y; i++)
    {
        if (milk+Y <M)
        {
            milk+=Y*(i+1);
        }
        for (int j = 0; j < x; j++)
        {
            if (milk +X <M)
            {
                milk += X*(j+1);
                max_milk= max(max_milk,milk);
            }else if (milk + X>M)
            {
                max_milk= max(max_milk,milk);
                milk = 0;
                break;
            }
        }
    }
    cout<<max_milk<<endl;
}