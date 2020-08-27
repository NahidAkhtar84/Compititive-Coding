#include <bits/stdc++.h>
using namespace std;
signed main() {
  int t;
  cin >> t;

  while(t--) {
    int n, a;
    std::cin >> n >> a;

    int mx = -1;
    int last = 0;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      last = (last + x)%a;
      if(last) mx = max(mx, max(i+1, n-i-1));
    }

    cout << mx << endl;
  }

  return 0;
}
