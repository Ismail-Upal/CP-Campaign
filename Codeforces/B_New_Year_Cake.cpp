#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int a, b; cin >> a >> b;
        int c1 = 0, c2 = 0;

        for(int i = a, j = b, k = 1; ; ){
            if(c1 % 2 == 0){
                if(i >= k) i -= k;
                else break;
            }
            else{
                if(j >= k) j -= k;
                else break;
            }
            c1++;
            k *= 2;
        }
        
        for(int i = b, j = a, k = 1; ; ){
            if(c2 % 2 == 0){
                if(i >= k) i -= k;
                else break;
            }
            else{
                if(j >= k) j -= k;
                else break;
            }
            c2++;
            k *= 2;
        }

        cout << max(c1, c2) << endl;
    }
    
    return 0;
}