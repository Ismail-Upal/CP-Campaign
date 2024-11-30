#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	opt();
 
    string s; cin>>s;
    int d;
    int n=0, m=0;
    while ((d = s.find("dream")) != -1) {
        s.erase(d, 5);
        n++;
    }
    int e;
    while ((e = s.find("erase")) != -1) {
        s.erase(e, 5); 
        m++;
    }
    // cout<<s;
    // cout<<n<<m;
    int er;
    while((er = s.find("er")) !=-1){
        if(n--)s.erase(er, 2);
    }
    cout<<s;
    int r;
    while((r = s.find("r")) !=-1){
        if(m--)s.erase(r, 1);
    }
    cout<<s;

    if(!s.empty())cout<<"NO";
    else cout<<"YES";

    
    return 0;
}