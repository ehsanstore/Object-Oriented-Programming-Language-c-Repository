#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test); // টেস্ট কেস সংখ্যা

    while (test--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int fridays = c / 7;
        int effective_days = c - fridays;
        long long total_milk = (long long)a* b * effective_days;

        printf("%lld\n", total_milk);
    }


}

