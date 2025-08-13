#include <stdio.h>
#include <math.h>

int main (void) {
    double a, b, c;
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    double delta = pow(b,2) - 4*a*c;
    double raiz_delta = sqrt(delta);

    double raiz_positiva;
    double raiz_negativa;

    raiz_positiva = (-b + raiz_delta) / (2*a);
    raiz_negativa = (-b - raiz_delta) / (2*a);
    
    if(delta > 0) {
        printf("A equação possui duas raizes reais e distintas.\n");
        printf("Raiz operação positiva: %.1lf\n", raiz_positiva);
        printf("Raiz operação negativa: %.1lf\n", raiz_negativa);
    }
    else if (delta < 0 ) {
        printf("A equação não possui raizes reais.\n");
    }
    else {
        printf("A equação possui duas raizes reais e iguais.\n");
        printf("Raiz: %.1lf\n", raiz_positiva);
    }

    return 0;

}
