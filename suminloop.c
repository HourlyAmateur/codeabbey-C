# include <stdio.h>
int main(){
    int d = 0;
    int sum = 0;
    int cases = 0;
    scanf("%d", &cases);
    for(int x = 0; x < cases; x++){ 
        scanf("%d", &d);
        sum = sum + d;
    }
    printf("%d", sum);
    return 0;
}