#include <stdio.h>
#define MAX 20

int conta(int n, int *w, int k) {
    if(n == 1 && w[0] == k)
        return 1;

    else if(n == 1 && w[0] != k)
        return 0;

    else
        return (k == *w) + conta(n-1, w+1, k);
}

int main() {
    int n, w[MAX],k,i;
    scanf("%d", &n);
    
    for(i=0; i<n; i++) 
        scanf("%d\n", &w[i]);
    
    scanf("%d", &k);
    printf("%d\n",conta(n, w, k));
    
    return 0;
}
