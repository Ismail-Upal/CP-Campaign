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
    int scene=0;
    int team ; 
    while(cin >> team and team > 0){
        cout<<"Scenario #" <<++scene<<endl;

        map<int,int>mp;
        for(int i=1; i<=team; i++){
            int member; cin>>member;
            while(member--){
                int m; cin>>m;
                mp[m] = i;
            } 
        }
        map<int,queue<int>> team_mem;
        queue<int>team_q;
        string s; 
        while(cin >> s and s!= "STOP"){
            // if(s=="STOP")break;
            if(s=="ENQUEUE"){
                int tm; cin>>tm;
                int team_id = mp[tm];
                if(team_mem[team_id].empty()){
                    team_q.push(team_id);
                    team_mem[team_id].push(tm);
                }
                else team_mem[team_id]. push(tm);
            }
            else if(s=="DEQUEUE"){
                int top_team = team_q.front();
                cout << team_mem[top_team].front()<<endl;
                team_mem[top_team].pop();
                if(team_mem[top_team].empty()){
                    team_q.pop();
                }
            }   
        }
        cout<<endl;
    }
 
    return 0;
}