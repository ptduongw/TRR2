#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int t;
    while (cin >> t) {
        int n;
        cin >> n;

        vector<int> degIn(n + 1, 0), degOut(n + 1, 0);
        vector<pair<int, int>> edges;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int x;
                cin >> x;
                if (x == 1) {
                    degIn[j]++;
                    degOut[i]++;
                    edges.push_back({i, j});
                }
            }
        }

        if (t == 1) {
            for (int i = 1; i <= n; i++)
                cout << degIn[i] << " " << degOut[i] << "\n";
        } else if (t == 2) {
            int m = edges.size();
            cout << n << " " << m << "\n";

            vector<vector<int>> inc(n + 1, vector<int>(m, 0));

            for (int i = 0; i < m; i++) {
                int u = edges[i].first;
                int v = edges[i].second;

                inc[u][i] = 1;
                inc[v][i] = -1;
            }

            for (int i = 1; i <= n; i++) {
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