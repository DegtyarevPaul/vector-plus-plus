#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  uint64_t n, m;
  cin >> n >> m;
  int arr[n][m];
  int lamps[m]; memset(lamps, 0, m*sizeof(int));
  for(int i=0; i<n; ++i){
      for(int j=0; j<m; ++j){
          cin>>arr[i][j];
          if(arr[i][j]==1)lamps[j]++;
      }
  }

  for(int i=0; i<n; ++i){
      bool f= true;
      for(int j=0; j<m; ++j){
         if(arr[i][j]==1 && lamps[j]==1) {f=false; break;}
      }
      if(f) {cout << "YES\n"; return 0;}
  }
  cout << "NO\n";





  return 0;
}
