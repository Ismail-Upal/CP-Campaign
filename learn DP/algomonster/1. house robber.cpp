#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;
    int loot[n + 1];
    
    int prev2 = loot[1];
    int prev1 = max(loot[1], loot[2]);

    for(int i = 3; i <= n; i++){
        int curr = max(prev1, prev2 + loot[i]);
        
    }

    cout << max(prev1, prev2);
    
    return 0;
}

