#include <stdio.h>

int main(void) {
   char trail[51];
   int process, cycles = 0;

   while(scanf("%s %d", trail, &process) != EOF) { 
    int i = 0;

    while(trail[i] != '\0') {
        if(trail[i] == 'R') {
            cycles++;
            i ++;;
        } else if(trail[i] == 'W') {
            cycles++;
            i ++;
        } else {
            int group = 0;
            while(trail[i] != 'R' && group < process) {
                group++;
                i++;
            }
            cycles++;
        }
    }

    printf("%d\n", cycles);
    }

    return 0;
}