#include <iostream>

using namespace std;

int main(){
    int j;
    cin>>j;
    int ans =0;
    for(int first = 1; first <= j-3; first++) {
        for(int second = first + 1; second <= j-2; second++) {
            for(int third = second + 1; third<=j-1; third++) {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    
}