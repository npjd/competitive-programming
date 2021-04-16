#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N; cin>>N;
    int res =0;

    vector<int> a(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    a.pop_back();
    a.pop_back();

    for (int i = 0; i < N-1; i++)
    {
        res+= abs(a[i]-a[i+1]);
    }
    
    cout<<res<<endl;
    
}