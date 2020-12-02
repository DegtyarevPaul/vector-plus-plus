#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64_t n, s=0, temp;
    cin >> n;
    for(int64_t i=0; i<n-1; ++i){
        cin >> temp;
        s+=temp;
    }

    cout << n*(1 + n)/2 - s << endl;



    return 0;
}
