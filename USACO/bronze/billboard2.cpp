#include <iostream>
#include <fstream>

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
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("billboard.in","r",stdin);
	freopen("billboard.out","w",stdout);
    Rect lawn,feed;
    cin >> lawn.x1 >> lawn.y1 >> lawn.x2 >> lawn.y2;
	cin >> feed.x1 >> feed.y1 >> feed.x2 >> feed.y2;
    if (lawn.x2<=feed.x2 && lawn.x1>=feed.x1)
    {
        cout<< lawn.area()-getOverlap(lawn,feed)<<endl;
    }else if (lawn.y2<=feed.y2 && lawn.y1>=feed.y1)
    {
        cout<< lawn.area()-getOverlap(lawn,feed)<<endl;
    } else if (lawn.y2<=feed.y2 && lawn.y1>=feed.y1 && lawn.x2<=feed.x2 && lawn.x1>=feed.x1)
    {
        cout<<0<<endl;
    }
    
    else
    {
        cout<<lawn.area()<<endl;
    }
}