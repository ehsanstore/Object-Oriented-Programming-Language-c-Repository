#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int freq[1000001] = {0}; // সরাসরি ১০^৬ + ১ সাইজের অ্যারে

    int a;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        freq[a]++;
    }

    for (int i = 1000000; i >= 1; i--) {
        int count = 0;
        for (int j = i; j <= 1000000; j += i) {
            count += freq[j];
        }
        if (count >= k) {
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}

