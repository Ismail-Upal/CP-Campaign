
void gen_subsets(vector<int> &v){ // BitMasking
    int n = v.size();
    int total = 1 << n; // 2 ^ n

    for(int mask = 0; mask < total; mask++){
        for(int i = 0; i < n; i++){
            if(mask & (1 << i)) cout << v[i] << " ";
        }
        cout << endl;
    }
}

void gen_subsets(vector<int>& subset, int i, vector<int> &v){ // recursion & backtrack
    if(i == v.size()){
        for(int n : subset) cout << n << " ";
        cout << endl;
        return;
    }
    gen_subsets(subset, i + 1, v);

    subset.push_back(v[i]);
    gen_subsets(subset, i + 1, v);
    subset.pop_back();
}

int main()
{   
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    gen_subsets(v);

    vector<int> subset;
    gen_subsets(subset, 0, v);
    return 0;
}