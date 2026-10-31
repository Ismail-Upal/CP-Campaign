#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    double tot; cin >> tot;

    double ans = pow(tot, 1.5) / (sqrt(2) * 12) ;

    cout << fixed << setprecision(4) << ans << endl;

}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        Solve();
    }
    
    return 0;
}

total area = x*x + 4 * ((sqrt(3) / 4) * a * a)
