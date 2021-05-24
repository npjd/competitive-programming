#include <iostream>

using namespace std;

int main(){
    int N;
    int grade =0;
    cin>>N;
    char correct[N];
    char incorrect[N];
    for (int i = 0; i < N; i++)
    {
        char letter;
        cin>>letter;
        correct[i] = letter;
    }
    for (int i = 0; i < N; i++)
    {
        char letter;
        cin>>letter;
        incorrect[i] = letter;
    }
    for (int i = 0; i < N; i++)
    {
        if (correct[i]==incorrect[i])
        {
            grade+=1;
        }        
    }
    cout<<grade<<endl;        
}