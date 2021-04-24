#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("taming.in","r",stdin);
	freopen("taming.out","w",stdout);
    // n input
    int N;
    //array of log
    int A[N];
	cin >> N;
    /// getting inputs
	for(int i=0;i<N;i++)
		cin >> A[i];
    //if cows already broke out on the first day, answer is -1
	if(A[0] > 0)
	{
		cout << -1 << '\n';
		return 0;
	}
    // set first day to 0
	A[0] = 0;
    // set time since last breakout to -1
	int t = -1;
    // min
	int req = 0;
    //max
	int pos = 0;
    //loop backwards
	for(int i=N-1;i>=0;i--)
	{
        // if there has not been a breakout and there is some sort of time descripency, return -1
		if(t != -1 && A[i] != -1 && A[i] != t)
		{
			cout << -1 << '\n';
			return 0;
		}
        // if there has not been a breakout, set the time since the last breakout to the time on the logs
		if(t == -1)
			t = A[i];
        // if the time on the log is incomplete, set it to the time since the latest breakout
		if(A[i] == -1)
			A[i] = t;
        // count all days with breakouts
		if(A[i] == 0)
			req++;
        //count a day if it is unsure and can have a breakout
		if(A[i] == -1)
			pos++;
        // decrease time when you have a time since last breakout
		if(t > -1)
			t--;
	}
    //return answer
	cout << req << ' ' << req+pos << '\n';
}