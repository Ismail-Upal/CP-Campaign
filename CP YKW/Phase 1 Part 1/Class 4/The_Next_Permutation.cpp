#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int32_t main()
{
    optimize();
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s ;cin>>s;
        if(next_permutation(s.begin(), s.end())){
            cout<<n<<' '<<s<<endl;
        }
        else{
            cout<<n<<" BIGGEST"<<endl;
        }
    }
    return 0;
}