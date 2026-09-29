#include<iostream>
#include<vector>

using namespace std;

struct Edge {
    int u, v, w;
};

void solve() {
    int t, n;
    cin >> t >> n;

    vector<int> degIn(n + 1, 0), degOut(n + 1, 0);
    vector<Edge> edges;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int k;
            cin >> k;
            
            if (k > 0 && k != 10000) {
                degIn[j]++;
                degOut[i]++;
                edges.push_back({i, j, k});
            }
        }
    }

    if (t == 1) {
        for (int i = 1; i <= n; i++) 
            cout << degIn[i] << " " << degOut[i] << "\n";
    } else if (t == 2) {
        int m = edges.size();
        cout << n << " " << m << "\n";
        for (int i = 0; i < m; i++) 
            cout << edges[i].u << " " << edges[i].v << " " << edges[i].w << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    solve();

    return 0;
}