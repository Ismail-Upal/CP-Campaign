#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ui = unsigned int;
const int MOD = (int)(1e9) + 7;
const int MAX = 1e7 + 5;
/*
//      _   __  ___  __   __ _______ _______
//     / | / / / _ \ \ \__\ \\__  __\\  __  \ 
//    /  |/ / / /_\ \ \  ___ \  \ \   \ \ \  \ 
//   / /|  / / ____  \ \ \  \ \ _\ \___\ \/  /
//  /_/ |_/ /_/    \__\ \_\  \_\\______\\___/

ID: mdnahidibnaharun
LANG: C++
TASK: practice 
*/
vector<int> prime;

void fsieve(){
    vector<bool>isprime(MAX,true);
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<MAX;i++){
        if(isprime[i]){
            for(int j=i*i;j<MAX;j+=i)isprime[j]=false;
        }
    }
    for(int i=2;i<MAX;i++)if(isprime[i])prime.push_back(i);
}

ll legformula(ll n,ll p){
    ll cnt=0;
    while(n){
        cnt+=n/p;
        n/=p;
    }
    return cnt;
}

ll min_n_for_prime_power(ll p,ll e){
    ll low=1,high=1e9,ans=1e9;
    while(low<=high){
        ll mid=(low+high)/2;
        if(legformula(mid,p)>=e){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
void solve(){
ll m;cin>>m;
ll orig_m=m,ans=0;
for(int i=0;i<prime.size() && (ll)prime[i]*prime[i]<=m;++i){
    int p=prime[i];
    if(m%p==0){
        int cnt=0;
        while(m%p==0){
            cnt++;
            m/=p;
        }
        ll n=min_n_for_prime_power(p,cnt);
        ans=max(ans,n);
    }
}

if(m>1){
    ll n=min_n_for_prime_power(m,1);
    ans=max(ans,n);
}
cout<<ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fsieve();
    ll t;cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
return 0;
}

