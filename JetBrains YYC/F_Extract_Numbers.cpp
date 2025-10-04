#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    string s; cin >> s;
    string a = "\"", b = "\"";

    int n = sz(s);
    for(int i = 0; i < n; i ++){
        int j = i;
        string t = "";
        bool isNum = 1;
        while(j < n and s[j] != ',' and s[j] != ';'){
            t += s[j];
            if(!(s[j] >= '0' and s[j] <= '9')) isNum = 0;
            j++;
        }
        i = j;
        if((t[0] == '0' and sz(t) > 1) or t == "") isNum = 0;

        if(isNum) a += t, a += ',';
        else b += t, b += ',';
    }
    a.pop_back(); b.pop_back();
    

    if(s[n - 1] == ','){
        b += ',';
    }

    if(!sz(a)) a += '-';
    else a += '"';
    if(!sz(b)) b += '-';
    else b += '"';

    cout << a << endl << b ;
    
    return 0;
}