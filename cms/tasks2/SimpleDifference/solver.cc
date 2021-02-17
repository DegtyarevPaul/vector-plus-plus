#include <bits/stdc++.h>
using namespace std;

bool isPrime(uint64_t n){
    if (n<=1) return false;
    if (n==2||3==n ) return true;
    for(uint64_t i=2; i*i<n; ++i){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  uint64_t t, x, y, i;

  cin >> t;
  while(t--){
    cin >> x >> y;
    if(x-y==1) { cout <<"NO" << endl; continue; }
    if(isPrime(x-y)) { cout << "NO" << endl; continue; } 
    int a, b;
    for(int i=2; i<=x-y; i++){
        if ((x-y)%i==0) {
            a = i;
            b = (x-y)/i;
            break;
        }
    }
    if(a!=b && isPrime(a)&&isPrime(b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
                 




  }

  return 0;
}
