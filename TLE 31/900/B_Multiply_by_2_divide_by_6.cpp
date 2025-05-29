#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	
    opt();
 
    tc{
        int n; cin >> n;
        int cnt2 = 0, cnt3 = 0;
        while(n > 1 and n % 2 == 0){
            cnt2 ++;
            n /= 2;
        }
        while(n > 1 and n % 3 == 0){
            cnt3 ++;
            n /= 3;
        }

        if(n > 1 or cnt2 > cnt3)cout << -1 << endl;
        else cout << 2*(cnt3 - cnt2) + cnt2 << endl;
    }


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    return 0;
}