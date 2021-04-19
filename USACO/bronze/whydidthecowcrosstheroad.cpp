#include <iostream>
#include <fstream>

using namespace std;

int main(){
    freopen("circlecross.in","r",stdin);
	freopen("circlecross.out","w",stdout);
    int res = 0;
    string s;
    cin>>s;
    for (int a = 0; a < s.size(); a++)
    {
        for (int b = a+1; b < s.size(); b++)
        {
            for (int c = b+1; c < s.size(); c++)
            {
                for (int d = c+1; d < s.size(); d++)
                {
                    if (s[a]==s[c] && s[b]==s[d])
                    {
                        res+=1;
                    }
                }
            }
        }
    }
    
    cout<<res<<endl;
}