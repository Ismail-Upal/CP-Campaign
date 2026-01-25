#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, m; cin >> n >> m;

    int row[m + 1];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1 or j == 1) row[j] = 1;
            else row[j] = row[j - 1] + row[j];
        }
    }
    cout << row[m];

    return 0;
}

