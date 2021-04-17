#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int least, middle, end;
    ifstream fin ("herding.in");
    fin>>least>>middle>>end;
    if (least>end)
    {
        swap(least,end);
    }
    if (least>middle)
    {
        swap(least,middle);
    }
    if (middle>end)
    {
        swap(middle,end);
    }
    ofstream fout ("herding.out");
    if (abs(end-least)==2)
    {
        fout<<0<<endl;
    }else if (abs(least-middle)==2||abs(end-middle)==2)
    {
        fout<<1<<endl;
    }else
    {
        fout<<2<<endl;
    }
    fout<< max(abs(least-middle),abs(end-middle))-1<<endl;
    return 0;
}