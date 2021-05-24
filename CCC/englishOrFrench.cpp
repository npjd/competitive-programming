#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int S = 0;
    int T = 0;
    for (int i = 0; i < N; i++)
    {
        string line;
        getline(cin,line);
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i]=='t'||line[i]=='T')
            {
                T+=1;
            }
            if (line[i]=='s'||line[i]=='S')
            {
                S+=1;
            }                        
        }        
    }
    if (T==S)
    {
        cout<<"French"<<endl;
        return 0;
    }
    if (T>S)
    {
        cout<<"English"<<endl;
        return 0;
    }
    if (T<S)
    {
        cout<<"French"<<endl;
        return 0;
    }
    
    
    
    
    
}