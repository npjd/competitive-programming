#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<string> direction;
    vector<string> city;

    string input;
    cin>>input;
    while (input!="SCHOOL")
    {
        if (input=="R" || input=="L")
        {
            direction.push_back(input);
        }else
        {
            city.push_back(input);
        }
        cin>>input;        
    }
    int city_len = city.size();
    reverse(direction.begin(), direction.end());
    reverse(city.begin(), city.end());
    for (int i = 0; i < city_len; i++)
    {
        string direction_string;
        if (direction[i]=="R")
        {
            direction_string="LEFT";
        }else
        {
            direction_string="RIGHT";
        }
        cout<<"Turn "<<direction_string<<" onto "<<city[i]<<" street "<<endl;                
    }
    if (direction.back()=="R")
    {
        cout<<"Turn LEFT into your HOME"<<endl;
    }else
    {
        cout<<"Turn RIGHT into your HOME"<<endl;
    }
    
    
}