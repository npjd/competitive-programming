#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("teleport.in","r",stdin);
	freopen("teleport.out","w",stdout);
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int dis = INT8_MAX;
    dis = min(dis, abs(a-x)+abs(b-y));
    dis = min(dis, abs(a-b));
    dis = min(dis, abs(a-y)+abs(b-x));
    cout<<dis<<endl;    
    
}
