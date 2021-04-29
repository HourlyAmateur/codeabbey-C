#include <stdio.h>

int main(){
    int out[24] = {0};
    int cases = 0;
    scanf("%d", &cases);
    for(int x = 0; x < cases; x++){
        int a = 0;
        int b = 0;
        int c = 0;
        scanf("%d %d %d", &a, &b, &c);
        if (a > b){
            if (c > b)
                out[x] = b;
            else
                out[x] = c;
        }        
        else if (a < b){
            if (a > c)
                out[x] = c;
            else
                out[x] = a;
        }
    }
    for (int i = 0; i < cases; i++){
        printf("%d ", out[i]);
    }

    return 0;
}