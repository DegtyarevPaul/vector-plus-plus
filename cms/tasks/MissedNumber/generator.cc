#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  uint64_t A, B, C;
  cin  >> A  >> B >> C;
  cout << B - A + 1 << endl;
  for(auto i=A; i<=B; ++i){
    if(i!=C) cout << i << ' ';
  }


  return 0;
}
