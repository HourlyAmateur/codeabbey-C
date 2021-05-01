#include <stdio.h>

int main(){

    const int cases = 300;
    int num = 0;
    int high_num = 0;
    int low_num = 0;
    for(int x = 0; x < cases; x++){
        scanf("%d", &num);
        if (num > high_num)
            high_num = num;
        if (num < low_num)
            low_num = num;
        
    }
    printf("%d ", high_num);
    printf("%d ", low_num);
    return 0;
}