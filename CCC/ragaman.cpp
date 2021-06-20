#include <iostream>

using namespace std;

int main(){

    int wrongCounter = 0;
    int asteriskCounter = 0;
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;

    if (str1.length() != str2.length)
    {
        cout << "N";
		return 0;
    }
    

    int n = str1.length();
    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());    

    for (int i = 0; i < n; i++)
    {
        if (str1[i]=='*')
        {
            asteriskCounter++;
            continue;
        }
        if (str2[i]=='*')
        {
            asteriskCounter++;
            continue;
        }
        if (str1[i]!=str2[i])
        {
            wrongCounter++;
        }                        
    }


    if (asteriskCounter >= wrongCounter)
    {
        cout<<"A"<<endl;
    }else
    {
        cout<<"N"<<endl;
    }
    
}