#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int time = 0;
    pair<int,int> cows[N];
    for (int i = 0; i <N; i++)
    {
        cin>> cows[i].first>>cows[i].second;
    }
    // sort to go in consecutive order
    sort(cows,cows+N);
    //loop through each test
    for (int i = 0; i < N; i++)
    {
        // if the time passed by one of the cows who is idle, then we can just staright up add 
        // how long the cow takes
        if (time >= cows[i].first) {
			time += cows[i].second;
		} else {
            // if there isn't any overlap or no cow is idle after finishing the previous test
            // we can jump straight to the next cow in line and add both their starting time gap and how long they take
			time += cows[i].first - time;
			time += cows[i].second;
		}        
    }
    cout<<time<<endl;   
}