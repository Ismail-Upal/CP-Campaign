#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m, k, t; cin >> n >> m >> k >> t;
    int si, sj; cin >> si >> sj;
    
    vector<pair<int, int>> des(m);
    
    for(int i = 0; i < m; i++){
        cin >> des[i].first >> des[i].second;
    }

    vector<pair<int, int>> circles;
    for(int i = 0; i < k; i++){
        circles.push_back({n / 2, n / 2});
    }

    for(auto c : circles){
        cout << c.first << " " << c.second << endl;
    }


    int x = si, y = sj;
    ll ops = 0;
    for(int i = 0; i < m; i++){
        int dx = des[i].first, dy = des[i].second;

        while(x < dx){
            int use = 0;
            for(auto &c : circles){
                int a = c.first, b = c.second;
                int nx = 2*a - x, ny = 2*b - y;

                if(nx < 0 or nx >= n or ny < 0 or ny >= n) continue;

                if((abs(dx - x) + abs(dy - y)) > (abs(dx - nx) + abs(dy - ny))){
                    cout << "J " << a << " " << b << endl;
                    c.first = x, c.second = y;
                    x = nx, y = ny; 
                    use = 1;
                    break;
                }
            }

            if(use) continue;

            cout << "D\n"; x++;
            ops++;
        }
        while(x > dx){
            int use = 0;
            for(auto &c : circles){
                int a = c.first, b = c.second;
                int nx = 2*a - x, ny = 2*b - y;

                if(nx < 0 or nx >= n or ny < 0 or ny >= n) continue;

                if((abs(dx - x) + abs(dy - y)) > (abs(dx - nx) + abs(dy - ny))){
                    cout << "J " << a << " " << b << endl;
                    c.first = x, c.second = y;
                    x = nx, y = ny; 
                    use = 1;
                    break;
                }
            }

            if(use) continue;

            cout << "U\n"; x--;
            ops++;
        }
        while(y < dy){
            int use = 0;
            for(auto &c : circles){
                int a = c.first, b = c.second;
                int nx = 2*a - x, ny = 2*b - y;

                if(nx < 0 or nx >= n or ny < 0 or ny >= n) continue;

                if((abs(dx - x) + abs(dy - y)) > (abs(dx - nx) + abs(dy - ny))){
                    cout << "J " << a << " " << b << endl;
                    c.first = x, c.second = y;
                    x = nx, y = ny; 
                    use = 1;
                    break;
                }
            }

            if(use) continue;

            cout << "R\n"; y++;
            ops++;
        }
        while(y > dy){
            int use = 0;
            for(auto &c : circles){
                int a = c.first, b = c.second;
                int nx = 2*a - x, ny = 2*b - y;

                if(nx < 0 or nx >= n or ny < 0 or ny >= n) continue;

                if((abs(dx - x) + abs(dy - y)) > (abs(dx - nx) + abs(dy - ny))){
                    cout << "J " << a << " " << b << endl;
                    c.first = x, c.second = y;
                    x = nx, y = ny; 
                    use = 1;
                    break;
                }
            }

            if(use) continue;

            cout << "L\n"; y--;
            ops++;
        }
    }

    cerr << "A = " << ops << " T = " << t << endl;
    cerr << "score = " << m + t - ops + 1 << endl;
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