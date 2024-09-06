#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=202;
int a[mx][mx];
int main()
{
    optimize();
    tc{
        int n,m; cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        int mx=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int s=a[i][j];
                int x=i, y=j;
                while(x>=1 && y>=1){
                    s+=a[x][y];
                    x--; y--;
                }
                s-=a[i][j];
                x=i,y=j;
                while(x<=n && y<=m){
                    s+=a[x][y];
                    x++; y++;
                }
                s-=a[i][j];
                x=i,y=j;
                while(x>=1 && y<=m){
                    s+=a[x][y];
                    x--; y++;
                }
                s-=a[i][j];
                x=i,y=j;
                while(x<=n && y>=1){
                    s+=a[x][y];
                    x++; y--;
                }
                s-=a[i][j];
                x=i,y=j;
                mx=max(s,mx);
            }
            
        }
        cout<<mx<<endl;
    }
    return 0;
}