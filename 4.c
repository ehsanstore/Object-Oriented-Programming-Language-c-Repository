#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int tem = b;
        b = a % b;
        a = tem;
    }
    return a;
}

int main() {
    int x;
    scanf("%d", &x);
    while (x--) {
        int n;
        scanf("%d", &n);
        int a[n];
        int last_pos[1001] = {0};  // ai <= 1000

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            last_pos[a[i]] = i + 1;  // index 1-based
        }

        int max_sum = -1;

        for (int i = 1; i <= 1000; i++) {
            if (last_pos[i] == 0) continue;
            for (int j = 1; j <= 1000; j++) {
                if (last_pos[j] == 0) continue;
                if (gcd(i, j) == 1) {
                    int sum = last_pos[i] + last_pos[j];
                    if (sum > max_sum)
                        max_sum = sum;
                }
            }
        }

        printf("%d\n", max_sum);
    }
    return 0;
}

