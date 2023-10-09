#include <stdio.h>
#define MAX 20

int conta(int n, int *w, int k){
    printf("%d\n", *w);

    if(n == 1 && *w != k)
        return 0;

    else if(n < 0)
        return k == *w;

    else
        return (k == *w) + conta(n-1, w+1, k);
}

int main(){
    int n, w[MAX],k,i;


    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d\n", &w[i]);
    }
    scanf("%d", &k);

    printf("%d\n",conta(n-1, w, k));

    return 0;
}
