#include <bits/stdc++.h>
using namespace std;

const int n =100;
int arr[n];

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  memset(arr, n*sizeof(int), 0);
  int p;
  cin >> p;
  for(int i=0;i<2;++i){
      int k;
      cin >> k;
      for(int l=0;l<k;++l){
          int temp;
          cin>>temp;
          arr[temp-1]=1;
      }
  }
  for (int i=0;i<p; ++i){
      if(arr[i]==0) {
          cout << "No" <<endl;
          return 0;
      }
  }
  cout << "Yes" << endl;

  return 0;
}
