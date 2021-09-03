#include<stdio.h>
#include<math.h>

int main(){

    int x = 0;
    float f = 0;
    double c = 0.0;
    double out[36] = {0};
    scanf("%i", &x);
    for(int y = 0;y < x;y++){
        scanf("%f", &f);
        c = ((f-32) * 5) / 9;
       
        out[y] = (int) round(c);

    }
    for(int y =0; y < 36; y++){
        printf("%.0f ", out[y]);
    }
    return 0;
}