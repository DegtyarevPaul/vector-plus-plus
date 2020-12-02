#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int64_t n;
  cin >> n;
  char c;
  unordered_map<char,int> dic;
  for(int64_t i=0; i<n; ++i){
      cin >> c;
      if(dic.find(c) == dic.end()){
          dic[c]=1;
      }
      else {
              dic[c]++;
      }
  }
  n=0;
  for(const auto& p: dic){
      if(p.second % 2 == 1) ++n;
      if(n>1) {
          cout << "No" << endl;
          return 0;
      }
  }
  cout << "Yes" << endl;

  return 0;
}
