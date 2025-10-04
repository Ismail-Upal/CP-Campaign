#include<bits/stdc++.h>
using namespace std;
const int N = 12, M = 1e3 + 3;
int n, m;
int rec(int i, int j){
    if(i == 1 and j == 2) return 1;
    if(i == 2 and j == 1) return 1;
    if(i == 0 and j == 0) return 1;
    if(i < 0 or j < 0) return 0;

    return rec(i - 1, j - 2) + rec(i - 2, j - 1);
}

int main()
{   
    cin >> n >> m;
    cout << rec(n, m);
    
    return 0;
}