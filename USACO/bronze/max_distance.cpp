#include <iostream>
using namespace std;

int main(){
    int N, x[100], y[100];
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>x[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin>>y[i];
    }
    int max_distance = 0;

    for (int i = 0; i < N; i++)
    {
        int x1 = x[i];
        int y1 = y[i];
        for (int j = 0; j < N; j++)
        {
            int x2 = x[j];
            int y2 = y[j];
            int dist = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
            max_distance= max(max_distance,dist);
        }
    }
    cout<<max_distance<<endl;
}