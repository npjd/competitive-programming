#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("socdist2.in","r",stdin);
	freopen("socdist2.out","w",stdout);
    // inint N
    int N;
    cin>>N;
    // store vals as a pair of bool and int
    pair<int,bool>arr[N];
    // index for how many infected cows
    int infectedindex= 0;
    // infected cows list used later to check the gap or distance between each cow
    int infectedCows[1000];
    //get inputs
    for (int i = 0; i < N; i++)
    {
        int a;
        bool b;
        cin>>a>>b;
        arr[i] = make_pair(a,b);
        // if a cow is infected, add them to the infected cow list
        if (b==1)
        {
            infectedCows[infectedindex] = a;
            // increment index of list, also represents num of infected cows
            infectedindex++;
        }        
    }
    // sort list so we can see the difference gaps
    sort(arr,arr+N);
    // initialize variable for R
    int R = INT8_MAX;
    // loop through each pair of integers can check each gap
    for (int i = 0; i < N-1; i++)
    {
        // we only want to get the distance between cows that are not infected and infected because we want to find how far the virus can travel per pair of cow
        if (arr[i].second!=arr[i+1].second)
        {
            // take the min
            R = min(R, arr[i+1].first-arr[i].first);
        }        
    }
    // subtract by one because we are getting distance
    R--;
    // init answer to 1 because there will always be one cow infected
    int ans = 1;
    //.... unless there have been no cows infected in the entire list, in this case we just return 0
    if (infectedindex ==0)
    {
        cout<<0<<endl;
        return 0;
    }
    // sort the positions between infected cows
    sort(infectedCows,infectedCows+infectedindex);
    for (int i = 0; i < infectedindex-1; i++)
    {
        // check if one of the cows is further away than the max dist, if there is one, that means there must have been an OG cow who spread the virus since it cannot go beyond the max_dist
        if (infectedCows[i+1]-infectedCows[i]>R)
        {
            ans+=1;
        }        
    }
    // print ans
    cout<<ans<<endl;     

}