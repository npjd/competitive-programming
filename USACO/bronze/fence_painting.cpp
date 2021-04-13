#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans =0;
    ans += b-a;
    ans += d-c;
    ans -= max(min(d,b)-max(a,c),0);
    cout<<ans;

}