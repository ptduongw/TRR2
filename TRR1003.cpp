#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int t;

    while (cin >> t) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n, vector<int>(n));
        vector<int> degree(n, 0);
        vector<pair<int, int>> edges;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> adj[i][j];

                if (adj[i][j] == 1) {
                    degree[i]++;

                    if (i < j) edges.push_back({i, j});
                }
            }
        }

        if (t == 1) {
            for (int i = 0; i < n; i++) {
                cout << degree[i] << " ";
            }
            cout << "\n";
        } else if (t == 2) {
            int m = edges.size();
            cout << n << " " << m << "\n";

            vector<vector<int>> inc(n, vector<int>(m, 0));

            for (int j = 0; j < m; j++) {
                int u = edges[j].first;
                int v = edges[j].second;

                inc[u][j] = 1;
                inc[v][j] = 1;
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << inc[i][j] << " ";
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