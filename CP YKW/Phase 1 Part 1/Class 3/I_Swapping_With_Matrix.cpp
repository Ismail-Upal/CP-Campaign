
#include<bits/stdc++.h>
using namespace std;
const int N = 500;
int a [N][N];
void swapp(int &i, int& j){
    int tmp = i;
        i=j;
        j=tmp;
}
void solve(int n, int x, int y){
    for(int i=0; i<n; i++){
        swapp(a[x][i], a[y][i]);
    }

    for(int i=0; i<n; i++){
        swapp(a[i][x], a[i][y]);
    }
}
int main()
{
    int n, x, y; cin >> n >> x >> y;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n ;j++){
            cin>>a[i][j];
        }
    }
    x--, y--;
    solve(n, x, y);

    for(int i=0; i<n ;i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
 
    return 0;
}