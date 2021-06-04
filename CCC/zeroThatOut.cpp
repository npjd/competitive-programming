#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    vector<int> vect;
    int k;
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        int num;
        cin>>num;
        if (num==0)
        {
            vect.pop_back();
        }else
        {
            vect.push_back(num);
        }                
    }
    int sum_of_elems = accumulate(vect.begin(), vect.end(), 0);
    cout<<sum_of_elems<<endl;
    
}