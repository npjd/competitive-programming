#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a, b;
    cin>>a;
    cin>>b;
    int ans =0;
    for (int i = a; i <= b; i++)
    {
        int sr = sqrt(i);
        if (sr*sr==i)
        {
            int cr = round(cbrt(i));
            if (cr*cr*cr==i)
            {
                ans+=1;
            }            
        }
    }
    cout<<ans<<endl;
}