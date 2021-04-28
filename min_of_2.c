#include <stdio.h>

int main(){
    int out[24] = {0};
    int cases = 0;
    scanf("%d", &cases);
    for(int x = 0; x < cases; x++){
        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);
        if (a > b)
            out[x] = b;
        else
            out[x] = a;
    }
    for (int c = 0; c < cases; c++){
        printf("%d ", out[c]);
    }

    return 0;
}