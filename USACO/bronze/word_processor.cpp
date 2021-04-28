#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("word.in","r",stdin);
	freopen("word.out","w",stdout);
    int N;
    cin>>N;
    int K;
    cin>>K;
    string words[N];
    int line_len =0;
    for (int i = 0; i < N; i++)
    {
        cin>>words[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        string word = words[i];
        if (line_len+word.length()>K)
        {
            line_len = 0;
            cout<<"\n";
            line_len+=word.length();
            cout<<word;
            if (words[i+1].length()+line_len<=K)
            {
                cout<<" ";
            }            
        }else
        {
            cout<<word;
            line_len+=word.length();
            if (words[i+1].length()+line_len<=K)
            {
                cout<<" ";
            }
        }
    }
}