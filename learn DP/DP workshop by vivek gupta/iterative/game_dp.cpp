#include<bits/stdc++.h>
using namespace std;
int dp[1002][1002];
int rec(int x, int y){
    // prunning

    // base case
    if(x == 0 and y == 0){
        return 0;
    }

    // cache check
    if(dp[x][y] != -1) return dp[x][y];

    // compute
    int ans = 0;
    for(int z = 0; z < x; z++){
        if(rec(z, y) == 0){
            ans = 1;
            break;
        }
    }

    for(int z = 0; z < y; z++){
        if(rec(x, z) == 0){
            ans = 1;
            break;
        }
    }

    for(int z = 1; z <= min(x, y); z++){
        if(rec(x - z, y - z) == 0){
            ans = 1;
            break;
        }
    }

    // save and return
    return dp[x][y] = ans;
}

int main()
{   
    int a, b; cin >> a >> b; 
    // memset(dp, -1, sizeof dp);
    // cout << rec(a, b) << endl;

    // iterative ------------

    for(int x = 0; x <= a; x++){
        for(int y = 0; y <= b; y++){
            // base case
            if(x == 0 and y == 0){
                // return 0;
                dp[x][y] = 0;
            }

            // cache check
            // if(dp[x][y] != -1) return dp[x][y];

            // compute
            int ans = 0;
            for(int z = 0; z < x; z++){
                if(dp[z][y] == 0){
                    ans = 1;
                    break;
                }
            }

            for(int z = 0; z < y; z++){
                if(dp[x][z] == 0){
                    ans = 1;
                    break;
                }
            }

            for(int z = 1; z <= min(x, y); z++){
                if(dp[x - z][y - z] == 0){
                    ans = 1;
                    break;
                }
            }

            // save and return
            // return dp[x][y] = ans;
            dp[x][y] = ans;
        }
    }

    cout << dp[a][b] ;
    
    return 0;
}








