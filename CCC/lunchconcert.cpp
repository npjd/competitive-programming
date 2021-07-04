#include <iostream>
#include <vector>

using namespace std;

vector<int> p,w,d;
int n;

long long move(int pos){
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int rightRange = p[i] + d[i];
        int leftRange = p[i] - d[i];
        if (pos<=rightRange and pos>=leftRange)
        {
            continue;
        }
        int close = rightRange;
        if (abs(pos-leftRange)<abs(pos-rightRange))
        {
            close = leftRange;
        }
        ans  += (long long)w[i] * abs(pos-close);
                            
    }
    return ans;
}


int main(){
    cin>>n;
    p.resize(n);
    w.resize(n);
    d.resize(n);
    int l = 1e9;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>p[i]>>w[i]>>d[i];
        l = min(l,p[i]);
        r = max(r,p[i]);
    }
    
    long long best = 1e18;
    for(int a=0;a<100;++a){
        int delta = (r-l)/3;
        int m1 = l+delta;
        int m2 = r-delta;
        long long x1 = move(m1);
        long long x2 = move(m2);
        best = min(x1, best);
        best = min(x2, best);
        if(x1 > x2){
            l = m1;
        }
        else{
            r = m2;
        }
    }

    cout << best  << endl;
        
    
}
