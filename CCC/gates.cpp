#include <iostream>

using namespace std;

int main(){
    int g;
    int p;
    
    cin>>g;
    cin>>p;

    int gates[g];
    int planes[p];

    for (int i = 0; i < p; i++)
    {
        cin>>planes[i];
        int plane = planes[i];
        while (plane!=0)
        {
            if (gates[plane]==0)
            {
                gates[plane]=1;
                plane = 0;
            }
            else
            {
                plane--;
                if (plane==0)
                {
                    i = p;
                }                
            }
        }
        int sum = 0;
        gates[0]=-1;
        for (int i = 0; i < g; i++)
        {
            if (gates[i]==1)
            {
                sum +=1;
            }            
        }
        cout<<sum<<endl;
        
    }
    
    
}