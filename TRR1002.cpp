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

    int degree[n + 1] = {0};
    for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (a[i][j] == 1) degree[i]++;
            }
        }
    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            cout << degree[i] << (i == n ? "" : " ");
        }
        cout << "\n";
    } else {
        cout << n << "\n";
        for (int i = 1; i <= n; i++) {
            cout << degree[i];
            for (int j = 1; j <= n; j++) {
                if (a[i][j] == 1) {
                    cout << " " << j;
                }
            }
            cout << "\n";
        }
    }
}