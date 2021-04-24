#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
//define answer to max int since they can take as much time as possible if they go over no already cut laws
const int max_int = numeric_limits<int>::max();
int main(){
    //io
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("mowing.in","r",stdin);
	freopen("mowing.out","w",stdout);
    int N;
    int regrow = max_int;
    cin>>N;
    //init a 2d grid / array. Set FJ position in the middle since he cannot travel out of the constraints set by the question
    int x = 1000, y = 1000, time = 0;
    vector<vector<int> > visited(2001, vector<int>(2001, -1));
    // set origin to visited, the value represents the time visited
    visited[x][y] = 0;
    for (int i = 0; i <N; i++)
    {
        char dir;
        cin>>dir;
        int dirX = 0, dirY = 0;
        // direction multipliers
        if (dir=='N')
        {
            dirY=1;
        }
        if (dir=='S')
        {
            dirY=-1;
        }
        if (dir=='E')
        {
            dirX=1;
        }
        if (dir=='W')
        {
            dirX=-1;
        }
        int steps;
		cin >> steps;
        //simulate steps
        for (int j = 0; j < steps; j++)
        {
            x += dirX;
			y += dirY;
			++time;
            // if FJ stumbles upon a piece of lawn that is already mown, he takes the minimum of the time difference between now and the time it was cut
            // to see how long it took it to regrow
            if (visited[x][y] != -1)
            {
                regrow = min(regrow,time-visited[x][y]);
            }
            // set the lawn cut now to the time
            visited[x][y] = time;            
        }          
    }
    // returning invalid answer
    if (regrow== max_int)
    {
        regrow = -1;
    }
    cout<<regrow<<endl;
}