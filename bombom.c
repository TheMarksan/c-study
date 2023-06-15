#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int q1, q2, q3;
    double p1, p2, p3, ave, car, pas;
    scanf("%d %d %d", &q1, &q2, &q3);
    scanf("%lf %lf %lf", &p1, &p2, &p3);
    
    ave = (q1*p1);
    car = (q2*p2);
    pas = (q3*p3);

    printf("Valor: R$%.2lf\n", (ave + car + pas));

    return 0;
}