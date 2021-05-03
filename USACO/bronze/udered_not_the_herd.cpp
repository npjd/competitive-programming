#include <iostream>

using namespace std;

int main(){
    string alph;
    string word;
    cin>>alph;
    cin>>word;
    int res = 0;
    while (word.size()!=0)
    {
        for (int i = 0; i < alph.length(); i++)
        {
            if (alph[i]==word[0])
            {
                word.replace(0,1,"");
            }
            
        }      
        res+=1; 
    }
    cout<<res<<endl;
    
}