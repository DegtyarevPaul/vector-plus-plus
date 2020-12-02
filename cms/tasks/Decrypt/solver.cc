#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  string word, decrypted;
  cin >> word;
  int n = word.size();
  decrypted = word;
  
  if(n%2==1) {
      decrypted[n/2] = word[n-1];
  }

  for(int i=0; i<word.size()/2; ++i)
  {
      decrypted[n/2 + (n%2) + i ] = word[n-1-2*i - (n%2)];
      decrypted[n/2 - 1   - i   ] = word[n-1-2*i-1 - (n%2)];
  }    
  cout << decrypted << endl;
  
  return 0;
}
