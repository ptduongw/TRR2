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
            int k;
            cin >> k;
                
            for (int j = 1; j <= k; j++) {
                int x;
                cin >> x;
                degIn[x]++;
                degOut[i] = k;

                edges.push_back({i, x});
            } 
        }

        if (t == 1) {
            for (int i = 1; i <= n; i++)
                cout << degIn[i] << " " << degOut[i] << "\n";
        } else if (t == 2) {
            int m = edges.size();
            cout << n << " " << m << "\n";

            for (int i = 0; i < m; i++) {
                cout << edges[i].first << " " << edges[i].second << "\n";
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