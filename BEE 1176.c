#include <stdio.h>

long long fibonacci(int num) {
    if (num == 0) return 0;
    if (num == 1 || num == 2) return 1;

    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int number;
        scanf("%d", &number);

        long long fib = fibonacci(number);
        printf("Fib(%d) = %lld\n", number, fib);
    }

    return 0;
}
