#include <iostream>
#include <string>
#include <map>

using namespace std;

bool permutation(map<char,int> m1, map<char,int> m2){
    for (int i = 0; i < 26; i++)
    {
        char test = 'a'+i;
        if (m1[test] != m2[test]){
            return false;
        }
    }
    return true;
}

int main(){
    string needle, haystack;
    int ans =0;
    cin>>needle;
    cin>>haystack;
    map<string,bool> tested;
    map<char,int> needle_chars, haystack_chars;
    for(int i=0;i<needle.size();i++){
        needle_chars[needle[i]]++;
    }

    for(int i=0;i<haystack.size()-needle.size()+1;i++) {
        string sub_str = haystack.substr(i,needle.size());
        if (i==0)
        {
            for(int j=0;j<sub_str.size();j++)
            {
                haystack_chars[sub_str[j]]++;
            }
        }
        else
        {
            char added = haystack[i+needle.size()-1];
            char removed = haystack[i-1];
            haystack_chars[added]++;
            haystack_chars[removed]--;                        
        }
        if (permutation(needle_chars, haystack_chars) && !tested[sub_str])
            {
                ans++;
                tested[sub_str] = true;
            }
    }

    cout<<ans<<endl;
}