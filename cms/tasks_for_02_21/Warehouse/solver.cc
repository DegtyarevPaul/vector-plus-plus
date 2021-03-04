#include <bits/stdc++.h>
using namespace std;

map<int,vector<pair<int, int> > > data;

int k; // jump height

bool isNear(pair<int, int> p1, pair<int, int> p2){
    return (p1.first-p2.first)*(p1.first-p2.first) + 
           (p1.second-p2.second)*(p1.second-p2.second) <= 2;
}
int path(int lvl, pair<int, int> point){
//    cout << lvl << point.first << point.second<< endl;
    int max_lvl = lvl;
    int next = data.upper_bound(lvl)->first;
    if (next - lvl > k || next <= lvl) return lvl;
    for(int t=next; t<=lvl+min(k,data.upper_bound(next)->first); ++t)
        if(data.find(t)!=data.end())
            for(int i=0; i<data[t].size(); ++i){
                if(isNear(point, data[t][i])){
                    max_lvl = max(max_lvl, path(t, data[t][i]));
                }
            }
    return max_lvl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m, tmp, min=1000000000, max_col;
    cin >> n >> m >> k;
    for(int i=0;i<n; ++i){
        for(int j=0;j<m;++j){
            cin >> tmp;
            if(tmp<min) min=tmp;
            if(data.find(tmp)==data.end()){
                data[tmp]={{i,j}};
            }
            else {
                data[tmp].push_back({i,j});
            }
        }
    }
    max_col = min;
    for(int i=0; i<data[min].size(); ++i){
        max_col = max(max_col, path(min, data[min][i]));
    }
    cout << max_col;
    return 0;
}
