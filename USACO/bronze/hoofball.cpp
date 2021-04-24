#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int cows[N];
    for (int i = 0; i < N; i++)
    {
        cin>>cows[i];
    }
    sort(cows, cows+N);
    if (N<3)
    {
        cout<<1<<endl;
        return 0;
    }
    bool right[N];
    right[0]=true;
    for (int i = i; i < N-1; i++)
    {
        if (cows[i]-cows[i-1]>cows[i+1]-cows[i])
        {
            right[i]=true;
        }
    }
    int res = 0, i = 0;
    while (i<N)
    {
    // Rights.
        int rCnt = 0;
        while (right[i]) {
            i++;
            rCnt++;
        }

        // Lefts
        int lCnt = 0;
        while (i<N && !right[i]) {
            i++;
            lCnt++;
        }

        // We must come from both sides.
        if (rCnt > 1 && lCnt > 1)
            res += 2;

        // Good enough to come from one side.
        else
            res++;
    }
    cout<<res<<endl;
    
}