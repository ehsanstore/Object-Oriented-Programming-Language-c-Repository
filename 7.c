#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 200005
int t, n;
long long a[MAXN];
long long oddPrefix[MAXN], evenPrefix[MAXN];

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            scanf("%lld", &a[i]);
        }
        oddPrefix[0] = evenPrefix[0] = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                oddPrefix[i] = oddPrefix[i - 1] + a[i];
                evenPrefix[i] = evenPrefix[i - 1];
            } else {
                evenPrefix[i] = evenPrefix[i - 1] + a[i];
                oddPrefix[i] = oddPrefix[i - 1];
            }
        }
        int found = 0;
        int offset = n * 2;
        int firstSeen[offset * 2 + 1];
        for (int i = 0; i <= 2 * offset; i++) firstSeen[i] = -1;

        for (int i = 0; i <= n; i++) {
            long long diff = oddPrefix[i] - evenPrefix[i];
            int idx = diff + offset;
            if (firstSeen[idx] != -1) {
                found = 1;
                break;
            } else {
                firstSeen[idx] = i;
            }
        }

        printf(found ? "YES\n" : "NO\n");
    }

    return 0;
}

