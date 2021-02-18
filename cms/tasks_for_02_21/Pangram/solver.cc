#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string str;
    getline(cin, str);// read n

    getline(cin, str);// read real text line

    transform(str.begin(), str.end(), str.begin(),
            [](unsigned char c){ return std::tolower(c); });

    sort(str.begin(),str.end());

    for(int i=0; i<str.size()-1; ++i){
        if(str[i+1]-str[i]>1){
            cout << "NO"  <<endl; 
            return 0;
        }
    }
    cout << "YES" << endl;  
    return 0;
}
