#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    int b;
    cin>>n>>k>>b;
    int signals[n+1];
    int prefix[n+1];
    for (int i = 0; i < b; i++)
    {
        int broke;
        cin>>broke;
        signals[broke] += 1;
    }
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i-1]+signals[i];
    }
    

    
    
}