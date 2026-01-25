#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;
    int cost[n + 1];
    for(int i = 1; i <= n; i++) cin >> cost[i];
    
    int prev1 = cost[2], prev2 = cost[1];

    for(int i = 2; i <= n; i++){
        int curr = min(prev1, prev2) + cost[i];
        prev2 = prev1;
        prev1 = curr;
    }

    cout << min(prev1, prev2) ;
    
    return 0;
}

