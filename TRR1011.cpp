#include<iostream>
#include<vector>

using namespace std;

struct Edge {
    int u, v, w;
};

void solve() {
    int t;
    while (cin >> t) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> adj(n + 1, vector<int>(n + 1, 10000));
        vector<int> degree(n + 1, 0);
        vector<Edge> edges;

        for (int i = 1; i <= m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            
            degree[u]++;
            degree[v]++;

            adj[u][v] = w;
            adj[v][u] = w;
        }

        if (t == 1) {
            for (int i = 1; i <= n; i++) {
                cout << degree[i] << " ";
            }
        } else if (t == 2) {
            cout << n << "\n";
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (i == j) cout << 0 << " ";
                    else cout << adj[i][j] << " ";
                }
                cout << "\n";
            }
        }
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