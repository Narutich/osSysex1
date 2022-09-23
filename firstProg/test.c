#include<stdio.h>
#include<math.h>

#define EXP 2.7182818284590452

double f(double x){
	return pow(EXP,-fabs(x)) * sin(x);
}

double g(double x){
	return pow(EXP,-fabs(x)) * cos(x);
}


int main(){
    double x = 0.0;
    printf("Enter number: ");
    scanf("%lf", &x);
    printf("f(x) = %lf,\n g(x) = %lf\n", f(x), g(x));

    return 0;
}
