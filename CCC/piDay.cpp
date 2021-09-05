#include <iostream>

using namespace std;

int check (int n, int k, int min) {
  if (min * k == n)
    return 1;
  if (k == 1)
    return 1;
  
  int sum = 0;
  for (int i = min; n / k >= i; i++) {
    sum += check (n - i, k - 1, i);
  }
  return sum;
}

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    cout<<check(n, k, 1);
}