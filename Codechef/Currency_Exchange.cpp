#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'

int main()
{   
    opt();
    
    tc {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int i = a, j = b;
        
        int ans = 0;
        if(a == x and b == y) ans = 1;
        else{
            while(1){
                if(i >= x and j >= y and i - x == j - y){
                    ans = 1; break;
                }
                if(j < y) break;
                i++, j -= 5;
            }

            i = a, j = b;
            while(1){
                if(i >= x and j >= y and i - x == j - y){
                    ans = 1; break;
                }
                if(i < x) break;
                i--, j += 5;
            }
        }

        if(ans) cout << "Yes" << endl;
        else cout << "No" << endl; 
    }
    
    return 0;
}
