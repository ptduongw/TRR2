#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int t;
    while (cin >> t) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> adj(n + 1, vector<int>(n+ 1, 0));
        vector<int> degree(n + 1, 0);

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;

            degree[u]++;
            degree[v]++;

            adj[u][v] = 1;
            adj[v][u] = 1;
        }

        if (t == 1) {
            for (int i = 1; i <= n; i++) {
                cout << degree[i] << " ";
            }
            cout << "\n";
        } else if (t == 2) {
            cout << n << "\n";
            for (int i = 1; i <= n; i++) {
                cout << degree[i] << " ";

                for (int j = 1; j <= n; j++) {
                    if (adj[i][j] == 1) 
                        cout << j << " ";
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