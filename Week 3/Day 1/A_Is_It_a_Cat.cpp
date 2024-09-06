#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    tc{
        int n; cin>>n;
        string s;
        for(int i=0;i<n;i++){
            char c; cin>>c;
            s.push_back(tolower(c));
        }
        //sort(s.begin(), s.end());
        int un=unique(s.begin(), s.end())-s.begin();
        s.resize(distance(s.begin(),s.begin()+un));
        if(s=="meow")Y;
        else N;
    }
    return 0;
}
