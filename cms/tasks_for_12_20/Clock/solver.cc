#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  uint64_t n;
  cin >> n;
  cout << (n/60)%24 << ' ' << (n%60) << endl;
  return 0;
}
