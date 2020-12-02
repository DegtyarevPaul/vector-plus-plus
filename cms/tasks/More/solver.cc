#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int64_t n, prev, curr, result {0};
  cin >> n >> curr;
  while(--n>0){
      prev = curr;
      cin >> curr;
      if (curr>prev) ++result;
  }
  cout << result << endl;
  return 0;
}
