#include <iostream>

using namespace std;

int unique(int number)
{
    char seen[5] = {0};

    while (number) {
        int digit = number % 10;

        number /= 10;
        if (seen[digit]++)
            return 0;
     }
     return 1;
 }

int main(){
    int y;
    cin>>y;
    y+=1;
    while (unique(y)==0)
    {
        y+=1;
    }
    cout<<y<<endl;
    

}