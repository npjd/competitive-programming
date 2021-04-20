#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ifstream fin ("blocks.in");
    ofstream fout ("blocks.out");
    int N;
    fin>>N;
    int arr[26] = { };
    for (int j = 0; j < N; j++)
    {
        string string1,string2;
        fin>>string1;
        fin>>string2;
        int chars1[26] = {};
        int chars2[26] = {};
        for (int i = 0; i < string1.length(); i++)
        {
            chars1[string1[i]-'a']+=1;
        }
        for (int i = 0; i < string2.length(); i++)
        {
            chars2[string2[i]-'a']+=1;
        }
        for (int i = 0; i < 26; i++)
        {
            arr[i]+= max(chars1[i],chars2[i]);
        }
    }
    for (int i = 0; i < 26; i++)
    {
        fout<<arr[i]<<endl;
    }
}