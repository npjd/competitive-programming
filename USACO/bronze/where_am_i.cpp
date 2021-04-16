#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    // inputs
    int N;
    string S;
    cin>>N;
    cin>>S;
    // loop thru all values of k
    for (int k = 1; k <= N; k++)
    {
        // create a set for all substrings with len k
        set<string> SS;
        // i is the starting point of the substring
        for (int i = 0; i <=N-k; i++)
        {
            // define var
            string Sub;
            // in this loop, we add on k characters onto string Sub by looping k times
            for (int j = 0; j < k; j++)
            {
                Sub += S[i+j];
            } 
            // add substring into set
            SS.insert(Sub);
        } 
        if (SS.size()==N-k+1)
        {
            cout<<k<<endl;
            break;
        }
    }
}