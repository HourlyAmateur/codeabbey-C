#include <stdio.h>

int main(){

    int cases = 0;
    scanf("%d", &cases);
    int out[14] = {0};
    for(int x = 0; x < cases; x++){
        int a = 0;
        int b = 0;
        // int sum = 0;
        scanf("%d%d", &a, &b);
        out[x] = a+b;
    }

    for(int x = 0; x < cases; x++){
        printf("%d ", out[x]);
    }
    return 0;
}