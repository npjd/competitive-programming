#include <iostream>

using namespace std;

int main(){
    int coldest = 201;
    string ans = "";
    string city;
    int temp;
    
    for (int i = 0; i < 10000; i++)
    {
        cin>>city>>temp;
        if (temp<coldest)
        {
            coldest = temp;
            ans  = city;
        }
        if (city=="Waterloo")
        {
            break;
        }        
    }
    cout<<ans<<endl;
           
}