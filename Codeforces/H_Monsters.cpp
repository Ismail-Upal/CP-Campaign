#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N=1005;
int n,m;
int sx,sy,dx,dy;
char grid[N][N];
int vis[N][N];
 
class person{
    public:
    int x;
    int y;
    char nm;
    person(int x,int y, char nm){
        this->nm=nm;
        this->x=x;
        this->y=y;
    }
};
bool isvalid(int x,int y){
    return x>=0&&x<n&&y>=0&&y<m&&grid[x][y]!='#';
}
vector<pair<int,int>>moves={{1,0},{-1,0},{0,1},{0,-1}};
queue<person>q;
pair<int,int> path[N][N];
void bfs(){
    while(!q.empty()){
        person head=q.front();
        q.pop();
        for(auto x : moves){
            int cx=head.x+x.first;
            int cy=head.y+x.second;
            if(isvalid(cx,cy) && !vis[cx][cy]){
                q.push(person(cx,cy,head.nm));
                vis[cx][cy]=true;
                grid[cx][cy]=head.nm;
                if(head.nm=='A'){
                    path[cx][cy]={x.first,x.second};
                }
            }
        }
    }
}
bool is_outer(int x,int y){
    return x==0 || y==0 || x==n-1 || y==m-1;
}
bool check_possibilty(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(is_outer(i,j)&& grid[i][j]=='A'){
                
                dx=i; dy=j;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='M'){
                q.push(person(i,j,'M'));
                vis[i][j]=true;
            }
            if(grid[i][j]=='A'){
                sx=i; sy=j;
            }
        }
    }
    q.push(person(sx,sy,'A'));
    vis[sx][sy]=true;
    bfs();
    if(!check_possibilty()){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    pair<int,int>coord={dx,dy};
    vector<pair<int,int>>ans;
    while(coord.first!=sx || coord.second!=sy){
        ans.push_back(path[coord.first][coord.second]);
        coord.first-=ans.back().first;
        coord.second-=ans.back().second;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto x: ans){
        if(x.first==-1 && x.second==0)cout<<"U";
        if(x.first==1 && x.second==0)cout<<"D";
        if(x.first==0 && x.second==-1)cout<<"L";
        if(x.first==0 && x.second==1)cout<<"R";
    }
    cout<<endl;                                                                     
    return 0;
}