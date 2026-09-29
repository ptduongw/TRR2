#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int t;
    while (cin >> t) {
        int n, m;
        cin >> n >> m;

        vector<int> degIn(n + 1, 0), degOut(n + 1, 0);
        vector<vector<int>> adj(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= m; i++) {
            int u, v;
            cin >> u >> v;
                
            degIn[v]++;
            degOut[u]++;
            adj[u][i] = 1;
            adj[v][i] = -1;  
        }

        if (t == 1) {
            for (int i = 1; i <= n; i++)
                cout << degIn[i] << " " << degOut[i] << "\n";
        } else if (t == 2) {
            cout << n << " " << m << "\n";

            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                    cout << adj[i][j] << " ";
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