#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, k; cin >> n >> k;
    vector<pair<int, int>> seg(n);
    for(int i = 0; i < n; i++){
        cin >> seg[i].first >> seg[i].second;
    }    

    sort(seg.begin(), seg.end());

    
    
    return 0;
}