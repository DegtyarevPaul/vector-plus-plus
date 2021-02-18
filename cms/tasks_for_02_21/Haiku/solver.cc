#include <bits/stdc++.h>
using namespace std;

bool isVowel(const char& c)
{
    static string vowels = "aeiou";
    return vowels.find(c)!=string::npos;
}

int countVowels(const string& str){
    int n=0;
    for(int i=0;i<str.size(); ++i){
        if(isVowel(str[i])) ++n;
    }
    return n;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  string line;
  
  array<int, 3> nums ={5,7,5};
  for(int i=0; i<3; ++i){
    getline(cin, line);
    if(countVowels(line)!=nums[i]){
        cout << "No" << endl;
        return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}
