#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    int t;
    cin >> t;

    int n;
    cin >> n;

    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n ; j++)
            cin >> a[i][j];
    
    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            int degree = 0;
            for (int j = 1; j <= n; j++) {
                if (a[i][j] == 1) degree++;
            }
            cout << degree << (i == n ? "" : " ");
        }
        cout << "\n";
    } else {
        vector<pair<int, int>> edges;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (a[i][j] == 1) {
                    edges.push_back({i, j});
                }
            }
        }

        cout << n << " " << edges.size() << "\n";
        for (auto edge : edges) {
            cout << edge.first << " " << edge.second << "\n";
        }
    }
}