#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    string s; cin >> s;
    map<int,int>mp;
    for(auto i : s) mp[i] ++;
    int even = 0, odd = 0;
    char od;
    for(auto i : mp){
        if(i.second & 1) od = i.first, odd++;
        else even ++;
    }
    if(sz(s) % 2 == 0){
        if(odd) cout << "NO SOLUTION" << endl;
        else{
            deque<char>dq;
            for(auto i : mp){
                while(i.second){
                    dq.push_front(i.first);
                    dq.push_back(i.first);
                    i.second -= 2;
                }
            }
            for(auto i : dq) cout << i;
        }
    }
    else{
        deque<char>dq;
        dq.push_back(od);
        mp[od] --;
        if(odd > 1) cout << "NO SOLUTION" << endl;
        else{
            for(auto i : mp){

                    while(i.second){
                        dq.push_front(i.first);
                        dq.push_back(i.first);
                        i.second -= 2;
                }
                
            }
            for(auto i : dq) cout << i;
        }
    }
    
    return 0;
}