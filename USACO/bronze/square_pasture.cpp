#include <iostream>

using namespace std;


int main(){
    int Ax1,Ax2,Ay1,Ay2;
    int Bx1,Bx2,By1,By2;
    cin>>Ax1>>Ay1>>Ax2>>Ay2;
    cin>>Bx1>>By1>>Bx2>>By2;
    int maxX = max(Ax2,Bx2);
    int minX = min(Ax1,Bx1);
    int xDif = maxX-minX;
    int maxY = max(Ay2,By2);
    int minY = min(Ay1,By1);
    int yDif = maxY-minY;
    if (xDif>yDif)
    {
        cout<< xDif*xDif<<endl;
    }else
    {
        cout<<yDif*yDif<<endl;
    }
        
}
