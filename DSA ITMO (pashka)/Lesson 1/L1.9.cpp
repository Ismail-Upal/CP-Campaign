// You are given two arrays a and b sorted in non-decreasing order. Find the number of pairs (i,j) such that ai = bj. Time O(n).

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0, ans = 0;
    while(i < n and j < m){
        if(a[i] == b[j]){
            int cnt1 = 0, cnt2 = 0, val = a[i];
            while(i < n and a[i] == val) i++, cnt1++;
            while(j < m and b[j] == val) j++, cnt2++;

            ans += cnt1 * cnt2;
        }
        else if(a[i] < b[j]) i++;
        else j++;
    }
    cout << ans;
    
    return 0;
}