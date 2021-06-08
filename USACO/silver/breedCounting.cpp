#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0;
    int q = 0;
    cin>>n>>q;
    vector<int> hoslteins(n+1);
    vector<int> gurneys(n+1);
    vector<int> jerseys(n+1);
    hoslteins.push_back(0);
    gurneys.push_back(0);
    jerseys.push_back(0);

    for (int i = 1; i <= n; i++)
    {
        int cow;
        cin>>cow;
        hoslteins[i] += hoslteins[i-1];
        gurneys[i] += gurneys[i-1];
        jerseys[i] += jerseys[i-1];
        if (cow==1)
        {        
            hoslteins[i] += 1;
        }else if (cow==2)
        {
            gurneys[i]+=1;
        }else if (cow==3)
        {
            jerseys[i]+=1;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int a;
        int b;
        cin>>a>>b;
        cout<< hoslteins[b] -hoslteins[a-1] << " "<<gurneys[b] -gurneys[a-1]<<" "<<jerseys[b]-jerseys[a-1]<<endl;
    }
    
}