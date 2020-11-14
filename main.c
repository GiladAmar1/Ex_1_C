#include<stdio.h>
#include"myMath.h"

int main()
{
	double x = 0;
	printf("Please inset a real number:\n");
    scanf("%lf", &x);
	double func1=sub(add(Exp((int)(x)), Pow(x, 3)), 2);
	printf("The value of f(𝑥)=𝑒^𝑥 +x^3 −2 at the point: %.4f is: %.4f\n", x, func1);
	double func2 = add(mul(x, 3), mul(Pow(x, 2), 2));
	printf("The value of f(x)=3x+2X^2 at the point :%.4f is: %.4f\n", x, func2);
	double func3 = sub(div(mul((Pow(x, 3)), 4), 5), mul(x, 2));
	printf("The value of f(x)=(3x^2)/5-2x atthe point: %.4f is: %.4f\n", x, func3);
	return 0;
}
