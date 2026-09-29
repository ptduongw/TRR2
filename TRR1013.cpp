#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int t;
    while (cin >> t) {
        int n;
        cin >> n;

        vector<int> degIn(n + 1, 0), degOut(n + 1, 0), adj[n + 1];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int x;
                cin >> x;
                if (x == 1) {
                    degIn[j]++;
                    degOut[i]++;
                    adj[i].push_back(j);
                }
            }
        }

        if (t == 1) {
            for (int i = 1; i <= n; i++)
                cout << degIn[i] << " " << degOut[i] << "\n";
        } else if (t == 2) {
            cout << n << "\n";
            for (int i = 1; i <= n; i++) {
                cout << adj[i].size() << " ";
                for (int x : adj[i])
                    cout << x << " ";
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