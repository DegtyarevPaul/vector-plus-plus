#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string str;
    uint64_t n; 
    cin >> n;

    while(n--){
        cin >> str;
        if(str.size()<=10){
            cout << str << endl;
        }
        else {
            cout << str.front() << str.size()-2 << str.back() << endl;
        }
    }
    return 0;
}
