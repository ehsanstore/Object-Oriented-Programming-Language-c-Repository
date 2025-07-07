#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    while (a--) {
        int n;
        long long d, x, y;
        scanf("%d %lld %lld %lld", &n, &d, &x, &y);

        long long d_squared = d * d;

        int indices[n];
        int count = 0;

        for (int i = 0; i < n; i++) {
            long long xi, yi;
            scanf("%lld %lld", &xi, &yi);

            long long dx = xi - x;
            long long dy = yi - y;
            long long distance_squared = dx * dx + dy * dy;

            if (distance_squared > d_squared) {
                indices[count++] = i + 1;
            }
        }

        if (count == 0) {
            printf("FE!N\n");
        } else {
            printf("%d\n", count);
            for (int i = 0; i < count; i++) {
                printf("%d ", indices[i]);
            }
            printf("\n");
        }
    }

    return 0;
}

