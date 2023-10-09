#include <stdio.h>

int mdc(int x, int y) {
    if (x < y)
        return mdc(y, x);
    else {
        if (x % y == 0)
            return y;
        else
            return mdc(y, x%y);
    }
}


int main() {
    int x, n;

    scanf("%d %d", &x, &n);
    printf("%d", mdc(x, n));
    
    return 0;
}
