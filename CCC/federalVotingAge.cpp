#include <iostream>
using namespace std;
int main(){
    int people;
    int year;
    int month;
    int day;
    cin>>people;
    for (int i = 0; i < people; i++)
    {
        cin>>year>>month>>day;
        if (2007-year >=18)
        {
            if (year ==1989)
            {
                if (month<=2)
                {
                    if (month==2)
                    {
                        if (day<=27)
                        {
                            cout<<"Yes"<<endl;
                            continue;
                        }else
                        {
                            cout<<"No"<<endl;
                            continue;
                        }                                                
                    }else
                    {
                        cout<<"Yes"<<endl;
                        continue;
                    }
                }else
                {
                    cout<<"No"<<endl;
                    continue;
                }                                
            }else
            {
                cout<<"Yes"<<endl;
                continue;
            }
        }
        cout<<"No"<<endl;                     
    }


}