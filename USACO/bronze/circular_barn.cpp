#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(){
    ifstream fin ("cbarn.in");
    ofstream fout ("cbarn.out");
    int N;
    fin>> N;
    vector<int> barns(N);
    int totalcows = 0;
    int res =INT8_MAX;

    for (int i = 0; i < N; i++)
    {
        fin>>barns[i];
        totalcows+= barns[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        int tempTotal = totalcows;
        int distance =0;
        for (int j = 0; j < N; j++)
        {
            tempTotal -= barns[(i+j)%N];
            distance += tempTotal;
        }
        res = min(distance,res);
    }
    fout<<res<<endl;
}