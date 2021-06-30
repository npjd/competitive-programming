#include <iostream>

using namespace std;

int main(){
    int radius = 0;
    cin>>radius;
    while (radius!=0){
        int result = 0;
        for (int i = 1; i<=radius; i++)
        {
            for (int j = 0; j <= radius; j++)
            {
                if (i*i +j*j <= radius*radius)
                {
                    result+=1;
                }else
                {
                    break;
                }
            }            
        }
        cout<<result*4+1<<endl;
        cin>>radius;        
    }
}