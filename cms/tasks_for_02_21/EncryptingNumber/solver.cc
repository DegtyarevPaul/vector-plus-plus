#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

int n, k;
  char str[11];
  cin >> n >> k;
  char *arr = new char(n+1);
  for(int i=0; i< n;i++)
  {

      cin >> str;
      if(i==k)
        arr[i]='.';
        if(i>=k)
      arr[i+1] = char(strlen(str) + (int)'0');
      else if(i<k)
        arr[i] = char(strlen(str) + (int)'0');
  }
  arr[n+1]='\0';
  cout << arr << endl;
  delete[] arr;

  return 0;
}
