#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int result = 0;
    int pos = x;
    int step = 1;
    while (true)
    {
        int new_pos = x+step;
        int small = min(pos,new_pos);
        int big = max(pos,new_pos);
        if (small<=y && y<=big)
        {
            result += abs(y-pos);
            break;
        }
        step *= -2;
        result += big-small;
        pos = new_pos;
        
    }
    cout<<result<<endl;
}