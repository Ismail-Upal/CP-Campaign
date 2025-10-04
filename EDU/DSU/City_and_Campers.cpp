#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
int par[N], Size[N];
multiset<int> sizes;

void make(int u){
	par[u] = u;
	Size[u] = 1;
	sizes.insert(1);
}

int find(int u){
	if(par[u] == u) return u;
	return par[u] = find(par[u]);
}

void Union(int u, int v){
	u = find(u);
	v = find(v);

	if(u != v){
		if(Size[u] < Size[v]) swap(u, v);
		par[v] = u;

		sizes.erase(sizes.find(Size[u]));
		sizes.erase(sizes.find(Size[v]));

		Size[u] += Size[v];

		sizes.insert(Size[u]);
	}
}

int main() {

	int n, k; cin >> n >> k;
	for(int i = 1; i <= n; i++) make(i);

	int mx = 1, mn = 1;
	while(k--){
		int u, v; cin >> u >> v;

		if(find(u) == find(v)) cout << mx - mn << endl;
		else{
			Union(u, v);

			mx = *sizes.rbegin();
			mn = *sizes.begin();

			cout << mx - mn << endl;
		}
	}

	return 0;
}
