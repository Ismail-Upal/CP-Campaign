// You are given two arrays a and b sorted in non-decreasing order and a number S. Find such i and j such that the sum ai +bj = S. Time O(n).
#include<bits/stdc++.h>
using namespace std;

int32_t main()
{   
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int s; cin >> s;
    int i = 0, j = m - 1;

    while(i < n && j >= 0) {
        int sum = a[i] + b[j];
        if(sum == s) {
            cout << i + 1 << " " << j + 1;
            return 0;
        }
        if(sum < s) i++;
        else j--;
    }
    cout << "No pairs" << endl;

    return 0;
    
    return 0;
}