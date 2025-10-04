#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
struct query{
    int l, r, i;
};
query Q[N];
int a[N], ans[N], freq[N], B = (int)sqrt(N);
int cnt = 0;

bool mo_cmp(query a, query b){
    if(a.l / B != b.l / B){
        return a.l / B < b.l / B;
    }
    return a.r < b.r;
}

void add(int i){
    freq[a[i]]++;
    if(freq[a[i]] == 1) cnt++;
}

void remove(int i){
    freq[a[i]]--;
    if(freq[a[i]] == 0) cnt--;
}

int main()
{   
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int l, r; cin >> l >> r;
        Q[i] = {l - 1, r - 1, i};
    }
    sort(Q, Q + q, mo_cmp);

    int mol = 0, mor = -1;
    for(int i = 0; i < q; i++){
        int l = Q[i].l;
        int r = Q[i].r;
        
        while(mol > l) mol--, add(mol);
        while(mor < r) mor++, add(mor);
        while(mol < l) remove(mol), mol++;
        while(mor > r) remove(mor), mor--;

        ans[Q[i].i] = cnt;
    }

    for(int i = 0; i < q; i++) cout << ans[i] << endl;
    
    return 0;
}