#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; 
    while(cin >> n){
        if(n == 0) break;

        int cnt = 0;

        for(int i = 0; i < n; i++){
            string s; cin >> s;
            s += ":";

            int h1, m1, s1, h2, m2, s2;
            for(int i = 2; i < s.size(); i++){
                string t = "";
                while(s[i] != ':') t += s[i], i++;
                i++, h1 = stoi(t), t = "";

                while(s[i] != ':') t += s[i], i++;
                i++, m1 = stoi(t), t = "";

                while(s[i] != ':') t += s[i], i++;
                i++, s1 = stoi(t), t = "";

                while(s[i] != ':') t += s[i], i++;
                i++, h2 = stoi(t), t = "";

                while(s[i] != ':') t += s[i], i++;
                i++, m2 = stoi(t), t = "";

                while(s[i] != ':') t += s[i], i++;
                i++, s2 = stoi(t), t = "";
            }

            if(s[0] == 'D'){
                if(h1 > 9) cnt++;
                else if(h1 == 9 and m1 > 30) cnt++;
                else if(h1 == 9 and m1 == 30 and s1 > 0) cnt++;
                else{
                    if(h1 < 8) h1 = 8, m1 = 30, s1 = 0;
                    else if(h1 == 8 and m1 < 30) m1 = 30, s1 = 0;
                    
                    ll l = h1 * 3600 + m1 * 60 + s1;
                    ll r = h2 * 3600 + m2 * 60 + s2;

                    ll m = 8 * 3600;
                    if(r - l < m) cnt++;
                }
            }
            else{
                if(h1 > 12) cnt++;
                else if(h1 == 12 and m1 > 30) cnt++;
                else if(h1 == 12 and m1 == 30 and s1 > 0) cnt++;
                else{
                    if(h1 < 8) h1 = 8, m1 = 30, s1 = 0;
                    else if(h1 == 8 and m1 < 30) m1 = 30, s1 = 0;
                    
                    ll l = h1 * 3600 + m1 * 60 + s1;
                    ll r = h2 * 3600 + m2 * 60 + s2;

                    ll m = 9 * 3600;
                    if(r - l < m) cnt++;
                }
            }
        }

        if(cnt > 3) cout << "Issue Show Cause Letter";
        else if(cnt == 0) cout << "All OK";
        else cout << cnt << " Point(s) Deducted";
        cout << endl;
    }
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}