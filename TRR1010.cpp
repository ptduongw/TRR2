#include<iostream>
#include<vector>

using namespace std;

struct Edge {
    int u, v, w;
};

void solve() {
    int t;
    while (cin >> t) {
        int n;
        cin >> n;

        vector<int> degree(n + 1, 0);
        vector<Edge> edges;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int weight;
                cin >> weight;
                
                if (weight > 0 && weight != 10000) {
                    degree[i]++;
                    if (i < j) {
                        edges.push_back({i, j, weight});
                    }
                }
            }
        }

        if (t == 1) {
            for (int i = 1; i <= n; i++) {
                cout << degree[i] << " ";
            }
            cout << "\n";
        } else if (t == 2) {
            cout << n << " " << edges.size() << "\n";
            for (int i = 0; i < edges.size(); i++) {
                cout << edges[i].u << " " << edges[i].v << " " << edges[i].w << "\n";
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