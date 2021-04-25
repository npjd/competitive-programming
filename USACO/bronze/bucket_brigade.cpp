#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("buckets.in","r",stdin);
	freopen("buckets.out","w",stdout);
    int barni = 0;
    int barnj = 0;
    int lakei = 0;
    int lakej = 0;
    int rocki = 0;
    int rockj = 0;
    for (int i = 0; i < 10; i++)
    {
        string s;
        cin>>s;
        for (int j = 0; j<10; j++)
        {
            if (s[j]=='B')
            {
                barni = i;
                barnj = j;
            }
            if (s[j]=='L')
            {
                lakei = i;
                lakej = j;
            }
            if (s[j]=='R')
            {
                rocki=i;
                rockj=j;
            }            
        }        
    }
    int distBL = abs(barni-lakei)+abs(barnj-lakej);
    int distBR = abs(barni-rocki)+abs(barnj-rockj);
    int distRL = abs(rocki-lakei)+abs(rockj-lakej);
    if ( (lakei==barni || lakej==barnj)&& distBL == distBR+distRL)
    {
        cout<<distBL+1<<endl;
        return 0;
    }else
    {
        cout<<distBL-1<<endl;
        return 0;
    }         
}

