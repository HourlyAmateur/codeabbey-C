#include <stdio.h>

int main(){
    int out[31] = {0};
    int cases = 0;
    scanf("%i", &cases);
    for(int x = 0; x < cases; x++){
        float a = 0;
        float b = 0;
        float c = 0; 
        scanf("%f %f", &a, &b);
        c = a/b;
        if(c <= 0){
            c = c - 0.5;
        }
        else{
            c = c + 0.5;
        }
        out[x] = (int) c;
    }
    for (int y = 0; y < cases; y++){
        printf("%i ", out[y]);
    }
    return 0;
}