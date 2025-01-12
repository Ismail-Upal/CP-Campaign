#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1e6+3;
int sum[N];
void find_divisors(){
    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j+=i){
            sum[j] += i;
        }
    }
}
bool is_prime(int n){ 
    if(n == 2) return true;
    if(n == 1 or n % 2 == 0) return false;
    
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}
int32_t main()
{   
    opt();
    find_divisors();
    tc{
        int a, b; cin >> a >> b;
        int ans = 0;
        for(int i = a; i <= b; i++){
            if(is_prime(sum[i])) ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}