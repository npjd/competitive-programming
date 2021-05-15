#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    string string1;
    string string2;
    getline(cin, string1);
    getline(cin, string2);

    remove(string1.begin(), string1.end(), ' ');
    remove(string2.begin(), string2.end(), ' ');
    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());

    set<char> string1_set;
    set<char> string2_set;

    for (int i = 0; i < string1.size(); i++)
    {
        string1_set.insert(string1[i]);
    }

    for (int i = 0; i < string2.size(); i++)
    {
        string2_set.insert(string2[i]);
    }
    
    if (string1_set==string2_set)
    {
        cout<<"yes"<<endl;
    }else
    {
        cout<<"no"<<endl;
    }
    
}