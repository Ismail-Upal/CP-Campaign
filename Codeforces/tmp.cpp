#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; 
    while(cin >> n){
        if(!n) break;

        int cnt = 0, point = 0;

        for(int i = 1; i <= n; i++){
            string s; cin >> s; s += ":";
            int h1, m1, s1, h2, m2, s2;

            string t = "";
            for(int i = 2; i < s.size(); i++){
                while(i < s.size() and s[i] != ':') t += s[i], i++;
                h1 = stoi(t);
                i++, t = "";

                while(i < s.size() and s[i] != ':') t += s[i], i++;
                m1 = stoi(t);
                i++, t = "";

                while(i < s.size() and s[i] != ':') t += s[i], i++;
                s1 = stoi(t);
                i++, t = "";

                while(i < s.size() and s[i] != ':') t += s[i], i++;
                h2 = stoi(t);
                i++, t = "";

                while(i < s.size() and s[i] != ':') t += s[i], i++;
                m2 = stoi(t);
                i++, t = "";

                while(i < s.size() and s[i] != ':') t += s[i], i++;
                s2 = stoi(t);
                i++, t = "";
            }  


            if(s[0] == 'D'){
                if(h1 > 9) cnt++;
                else if(h1 == 9 and m1 > 30) cnt++;
                else if(h1 == 9 and m1 == 30 and s1 > 0) cnt++;
                else{
                    if(h1 < 8 || (h1 == 8 && m1 < 30)) {
    h1 = 8;
    m1 = 30;
    s1 = 0;
}
                }

                s1 += m1 * 60;
                s1 += h1 * 3600;

                s2 += m2 * 60;
                s2 += h2 * 3600;

                
                ll x = s2 - s1;
                double h = (double)x / 3600.0;
                if(h < 8) cnt++;
            }
            
            if(s[0] == 'E'){
    if(h1 > 11) cnt++;
    else if(h1 == 11 && m1 > 30) cnt++;
    else if(h1 == 11 && m1 == 30 && s1 > 0) cnt++;
    else {
        if(h1 < 11 || (h1 == 11 && m1 < 30)) {
            h1 = 11;
            m1 = 30;
            s1 = 0;
        }
    }

    s1 += m1 * 60;
    s1 += h1 * 3600;

    s2 += m2 * 60;
    s2 += h2 * 3600;

    ll x = s2 - s1;
    double h = (double)x / 3600.0;

    if(h < 9) cnt++;
}
                }

               

        // cout << cnt << endl;
        if(cnt > 3) cout << "Issue Show Cause Letter" << endl;
        else if(cnt == 0) cout << "All OK" << endl;
        else cout << cnt << " Point(s) Deducted" << endl;
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