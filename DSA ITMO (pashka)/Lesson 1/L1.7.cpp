/*
    You are given two arrays a and b sorted in non-decreasing order.
    Find i and j such that the difference |ai − bj| is minimal. Time O(n).
*/

#include<bits/stdc++.h>
using namespace std;

int32_t main() {   
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0;
    int minDiff = INT_MAX;
    int ansI = 0, ansJ = 0;

    while(i < n && j < m) {
        int diff = abs(a[i] - b[j]);
        if(diff < minDiff) {
            minDiff = diff;
            ansI = i;
            ansJ = j;
        }
        if(a[i] < b[j]) i++;
        else j++;
    }
    cout << ansI + 1 << " " << ansJ + 1 << endl;

    return 0;
}
// O(n + m)