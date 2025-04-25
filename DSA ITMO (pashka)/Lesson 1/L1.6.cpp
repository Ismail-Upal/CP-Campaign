/*
    You are given two arrays a and b sorted in non-decreasing order. Determine if there is a number that occurs in both arrays. Time O(n).
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0;
    while(i < n and j < m){
        if(a[i] == b[j]){
            cout << "YES" << endl << a[i];
            return 0;
        }
        if(a[i] < b[j]) i++;
        else j++;
    }
    cout << "NO" ;
    
    return 0;
}
// O(n + m)