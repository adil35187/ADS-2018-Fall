#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[500500], n, cnt[500500], mx, num;

int main () {

  cin >> n;
  for(long long i=1;i<=n;++i) {
    cin >> a[i];
    cnt[a[i]]++;
  }
  for(long long i=1;i<=n;++i) {
    for(long long j=i + 1; j<=n; j++) {
      if (a[i] > a[j]) 
        swap(a[i], a[j]);
    }
  }
  for (long long i=0; i<=1000; ++i){
    if (cnt[i]) {
      mx = max(mx, cnt[i]);
      num++;
    }
  }
  cout << mx << ' ' << num;
  
  
  return 0;
}