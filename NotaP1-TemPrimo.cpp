#include <stdio.h>
#define MAX 31


int verificaP(int num)
{
    for (int i = 2; i <= num /2 ; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int temPrimo(int *v, int n){

    if(n==1)
        return verificaP(*v);
    if(*v == 1)
        return 0;

    else
        return verificaP(*v) + temPrimo(v+1, n-1);
}

int main(){
    int n, v[MAX];

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }


    if(temPrimo(v, n) >= 1)
       printf("Sim");
    else
       printf("Nao");


    return 0;
}
