#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int64_t prev, curr, n, turns=0;

    cin >> n;
    cin >> prev;
    for(int i=0; i<n-1; ++i){
        cin >> curr;
        if(curr < prev) { turns += prev-curr; curr = prev; }

        prev = curr;

    }

    cout << turns;
    return 0;
}
