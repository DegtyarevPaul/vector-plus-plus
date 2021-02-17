#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    uint64_t n, m;
    cin >> n;
    if(n%2==0){
        cout << n /2 << endl;
        for(uint64_t i=0; i<n/2; ++i )
            cout << "2 ";
    }
    else{
        cout << (n-3)/2 + 1 << endl;
        for(uint64_t i=0; i<(n-3)/2; ++i )
            cout << "2 ";

        cout << 3;
    }

    return 0;
}
