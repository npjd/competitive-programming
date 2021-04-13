#include <iostream>

using namespace std;

struct Rect
{
    int x1,x2,y1,y2;
    int area(){
        return (x2-x1)*(y2-y1);
    }
};
int getOverlap(Rect p, Rect q){
    int x = max(0, min(p.x2,q.x2)-max(p.x1,q.x1));
    int y = max(0, min(p.y2,q.y2)-max(p.y1,q.y1));
    return x*y;
}
int main(){
    Rect a,b,t;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
	cout << a.area()+b.area()-getOverlap(a,t)-getOverlap(b,t) << endl;
}
