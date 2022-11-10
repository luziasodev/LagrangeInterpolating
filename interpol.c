#include <stdio.h>

//Pi(x) = yi * ai(x)
//ai(x) = (x - xj)/(xi - xj)
// P(x) += Pi(x)

int main() {
    printf("\n :p calculadora de polinômio interpolador >.< \n");

    int pontos;
    printf("\n pontos \n");
    scanf(" %d", &pontos);

    float a[pontos];
    float b[pontos];
    printf("\n coordenadas x\n");
    for(int i = 0; i < pontos; i++) {
        scanf("%f", &a[i]);
    }
    printf("\n coordenadas y\n");
    for(int i = 0; i < pontos; i++) {
        scanf("%f", &b[i]);
    }

    for(int i = 0; i < pontos; i++) {
        printf("\n a[%d] = %f \n", i, a[i]);
        printf(" b[%d] = %f \n", i, b[i]);
    }
    
    float x, xi, ai = 1, Pi, Px = 0;
    printf("\n valor x de P(x) \n");
    scanf(" %f", &x);

    for(int i = 0; i < pontos; i++) {
        ai *= (x - a[i+1])/(xi - a[i+1]);
    }

    for(int i = 0; i < pontos; i++) {
        xi = a[i];
        Pi = b[i] * ai; 
        Px += Pi;
    }

    printf("\n %f \n", Px);

    return 0;
}
