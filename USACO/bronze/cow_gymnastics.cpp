#include <iostream>
#include <string>

using namespace std;


int main(){
    int K, N; cin>> K>>N;
    int res =0;
    int workouts[20][20];
    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin>> workouts[i][j];
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i==j)
            {
                continue;
            }
            bool better = true;
            for (int p = 0; p < K; p++)
            {
                int x = distance(workouts[p], find(workouts[p], workouts[p] + N, i));
                int y = distance(workouts[p], find(workouts[p], workouts[p] + N, j));
                if (x>y)
                {
                    better = false;
                    break;
                }
            }
            if (better)
            {
                res++;
            }
        }
    }
    cout<<res<<endl;
}