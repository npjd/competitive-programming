#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int even =0;
    int odd =0;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin>>num;
        if (num%2==0)
        {
            even+=1;
        }else
        {
            odd+=1;
        }                
    }
    if (even>odd)
    {
        cout<<odd*2+1<<endl;
        return 0;
    }
    
    while (true)
    {
        if (odd==even)
        {
            cout<<odd+even<<endl;
            return 0;
            break;
        }
        if (odd-even==1)
        {
            cout<<odd+even-2<<endl;
            return 0;
            break;
        }
        if (odd-even==2)
        {
            cout<<odd+even-1<<endl;
            return 0;
            break;
        }
        odd-=2;
        even+=1;
    }
        
}