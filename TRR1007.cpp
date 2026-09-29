#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int t;
    while (cin >> t) {
        int n, m;
        cin >> n ;

        vector<int> degree(n + 1, 0);
        vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= n; i++) {
            int k;
            cin >> k;
            degree[i] = k;

            for (int j = 1; j <= k; j++) {
                int x;
                cin >> x;
                adj[i][x] = 1; 
            }
        }

        if (t == 1) {
            for (int i = 1; i <= n; i++) {
                cout << degree[i] << " ";
            }
            cout << "\n";
        } else if (t == 2) {
            cout << n << "\n";
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
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