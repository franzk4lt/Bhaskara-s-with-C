//To compile with GCC, use this command --> gcc -o <name> bhaskara.c -lm

#include <stdio.h>
#include <math.h>

int main (void) {
    double a, b, c;
    printf("Insert the value of a: ");
    scanf("%lf", &a);
    printf("Insert the value of b: ");
    scanf("%lf", &b);
    printf("Insert the value c: ");
    scanf("%lf", &c);
    double delta = pow(b,2) - 4*a*c;
    double delta_root = sqrt(delta);

    double positive_root;
    double negative_root;

    positive_root = (-b + delta_root) / (2*a);
    negative_root = (-b - delta_root) / (2*a);
    
    if(delta > 0) {
        printf("The equation has two distinct real roots.\n");
        printf("Positive root operation: %.1lf\n", positive_root);
        printf("Negative root operation: %.1lf\n", negative_root);
    }
    else if (delta < 0 ) {
        printf("The equation has no real roots.\n");
    }
    else {
        printf("The equation has two real and equal roots.\n");
        printf("Root: %.1lf\n", positive_root);
    }

    return 0;

}
