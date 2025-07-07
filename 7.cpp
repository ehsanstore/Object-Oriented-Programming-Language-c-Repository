#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a; cin >> a;
    while (a--) {
        int n; cin >> n;
        vector<long long> a(n + 1), oddPrefix(n + 1), evenPrefix(n + 1);

        for (int i = 1; i <= n; i++) cin >> a[i];

        oddPrefix[0] = 0;
        evenPrefix[0] = 0;

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                oddPrefix[i] = oddPrefix[i - 1] + a[i];
                evenPrefix[i] = evenPrefix[i - 1];
            } else {
                evenPrefix[i] = evenPrefix[i - 1] + a[i];
                oddPrefix[i] = oddPrefix[i - 1];
            }
        }

        unordered_map<long long, int> firstSeen;
        firstSeen[0] = 0; // diff = 0 at prefix 0
        bool found = false;

        for (int i = 1; i <= n; i++) {
            long long diff = oddPrefix[i] - evenPrefix[i];
            if (firstSeen.count(diff)) {
                found = true;
                break;
            } else {
                firstSeen[diff] = i;
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }

    return 0;
}
