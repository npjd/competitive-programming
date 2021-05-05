#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    
    int N, L;
    cin >> N >> L;
    vector<int> c(N);
    for(int i=0; i<N; i++){
        cin >> c[i];
    }
    L = min(L, N);
    sort(begin(c), end(c), greater<int>());
    int l = 0, h = N;
    while(l < h) {
        int m = (l + h + 1)/2;
        int cit = 0;
        for(int i=0; i<m; i++){
            cit += max(0, m-c[i]);
            if(cit > L) break;
        }
        if(cit <= L)
        {
            l = m;
        }
        else
        {
            h = m-1;
        }
    }
    cout << l << '\n'; 
    
}