#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000;
int arr[MAX][MAX];

int clear(int i, int j){
    int size=1;
    arr[i][j]=0;
    if(arr[i][j+1]==1) size+=clear(i,j+1);
    if(arr[i+1][j]==1) size+=clear(i+1,j);
    if(arr[i][j-1]==1) size+=clear(i,j-1);
    if(arr[i-1][j]==1) size+=clear(i-1,j);
    return size;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n, m, max_island{0}, count{0};
  cin >> n >> m;
  for(int i=1; i<=n; ++i){
      for(int j=1; j<=m; ++j){
          cin >> arr[i][j];
      }
  }
  for(int i=1; i<=n; ++i){
      for(int j=1; j<=m; ++j){
          if(arr[i][j]){
              ++count;
              max_island=max(max_island, clear(i, j));
          }  
      }
  }

  cout << count << endl << max_island << endl;

  return 0;
}
