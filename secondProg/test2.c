#include<stdio.h>
#include "g.h"
#include "f.h"


int main(){
    double x = 0.0;
    printf("Enter number: ");
    scanf("%lf", &x);
    printf("f(x) = %lf,\n g(x) = %lf\n", f(x), g(x));

    return 0;
}
