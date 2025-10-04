#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int maxN=(1<<15);
vector<int>all_palindrome;
void mark_palindrome(){
    for(int i=0;i<maxN; i++){
        string s=to_string(i);
        int len=s.length();
        bool ok=true;
        for(int j=0;j<len/2;j++){
            if(s[j]!=s[len-j-1]){
                ok=false;
                break;
            }
        }
        if(ok)all_palindrome.push_back(i);
    }
}
int main()
{
    optimize();
    mark_palindrome();
    tc{
        int n;cin>>n;
        vector<int>v, cnt(maxN);
        for(int i=0;i<n;i++){
            int x; cin>>x;
            cnt[x]++;
            v.push_back(x);
        }
    
        ll ans=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<all_palindrome.size();j++){
                int curr=v[i]^all_palindrome[j];
                ans+=cnt[curr];
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}