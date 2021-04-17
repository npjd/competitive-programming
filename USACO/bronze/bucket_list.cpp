#include <iostream>
using namespace std;

int main(){
    // init vals
    int N, S[100],E[100],B[100];
    cin>>N;
    // add vals to arrays
    for (int i = 0; i < N; i++)
    {
        cin>> S[i]>>E[i]>>B[i];
    }
    // define int for answer
    int max_buckets = 0;
    // simulate the time
    for (int time = 0; time < 1000; time++)
    {
        // define a variable for the number of buckets available
        int buckets_available = 0;
        // look through every cow to see if they can be milked and they need buckets
        for (int i = 0; i < N; i++)
        {
            //check to see if it's the cows milking time
            if (S[i]<=time && time<=E[i])
            {
                // add the number of buckets they need
                buckets_available+= B[i];
            }
            
        }
        // the max buckets will check to see if the number of buckets the cows need exceeds how many are currently available
        // this will ensure that when 1 cows milking time is over and anothers comes along and they require less buckets than them
        // it will not be added to the max_buckets.
        max_buckets= max(max_buckets,buckets_available);
    }
    cout<<max_buckets<<endl;
    
    
}