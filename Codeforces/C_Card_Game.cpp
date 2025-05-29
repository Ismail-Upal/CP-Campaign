#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        priority_queue<int> alice, bob;
        int n; cin >> n;
        string s; cin >> s;

        char one;
        for(int i = 1; i <= n; i++){
            char c = s[i - 1];
            if(i == 1){
                if(c == 'A') one = 'a';
                else one = 'b';
            }

            if(c == 'A') alice.push(i);
            else bob.push(i);
        }

        string ans;
        while(1){
            if(alice.empty()){
                ans = "Bob"; break;
            }
            if(bob.empty()){
                ans = "Alice"; break;
            }

            int a = alice.top();
            if(a == n and one == 'b'){
                int tmp = a; alice.pop();
                a = alice.top();
                alice.push(tmp);
            }
            int b = bob.top();

            if(bob.size() == 1 and b == n and one == 'a'){
                ans = "Alice" ; break;
            }
            else if(alice.size() == 1 and a == n and one == 'b'){
                ans = "Bob"; break;
            }
            else if(a > b){
                alice.push(b);
                bob.pop();
            }
            else if(a < b){
                bob.push(a);
                alice.pop();
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}