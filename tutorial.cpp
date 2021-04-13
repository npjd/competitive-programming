#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n!=1)
    {
        if (n%2==0)
        {
            n = n/2;
            cout<<n<<" ";
        }else
        {
            n = n*3;
            n = n+1;
            cout<<n<<" ";
        }
    }
}