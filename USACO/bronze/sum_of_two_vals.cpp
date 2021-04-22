#include <iostream>

using namespace std;

int main(){
    int N;
    cin>> N;
    int X;
    cin>>X;
    int nums[N];
    map<int,int> pointers;
    for (int i = 0; i < N; i++)
    {
        cin>>nums[i];
    }
    for (int i = 0; i <N; i++)
    {
        if (pointers.count(x-nums[i]))
        {
            cout<<i+1<<" "<<pointers[x-nums[i]]<<endl;
            return 0;
        }
        pointers[nums[i]] = i+1;
    }
    cout<<"IMPOSSIBLE"<<endl;
    
    
}