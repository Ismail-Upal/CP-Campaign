#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl '\n'

const double PI = acos(-1);

int main()
{   
    opt();
    
    int n, q; 
    cin >> n >> q;

    vector<double> angle(n);
    for(int i = 0; i < n; i++){
        double x, y; 
        cin >> x >> y;
        double z = atan2(y, x);
        if(z < 0) z += 2 * PI;
        angle[i] = z;
    }

    vector<double> sorted = angle;
    sort(sorted.begin(), sorted.end());

    vector<double> newangle = sorted;
    for(double a : sorted){
        newangle.push_back(a + 2 * PI);
    }

    while(q--){
        int x, y; 
        cin >> x >> y;
        x--, y--;

        double a = angle[x];
        double b = angle[y];

        double l = b;
        double r = a;
        if(r < l) r += 2 * PI;

        auto L = lower_bound(newangle.begin(), newangle.end(), l);
        auto R = upper_bound(newangle.begin(), newangle.end(), r);

        cout << (R - L) << endl;
    }

    return 0;
}
