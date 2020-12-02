#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int64_t n, k{5}, result{0};
  cin >> n;

  while(n >= k){
    result+=n/k;
    k*=5;
  }
  cout << result << endl;


  return 0;
}
