#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b, c, d, x1, x2, x;
	printf("Reshatel uravneniy vida: a*x^2 + b*x +c = 0 \n");
	printf("Vvedite a:");
	scanf("%lf", &a);
	printf("Vvedite b:");
	scanf("%lf", &b);
	printf("Vvedite c:");
	scanf("%lf", &c);
	
	if (a > 0){
		printf("Reshayem uravneniye %.1lf*x^2 + %.1lf*x + %.1lf = 0\n", a, b, c);
		d = b * b - 4 * a * c;
		if(d == 0){
			x1 = -b/(2*a);
			printf("x=%lf", x1);
		} else {
			if(d > 0){
				x1 = (-b + sqrt(d))/ (2*a);
				x2 = (-b - sqrt(d))/ (2*a);
				printf("x1=%lf, x2=%lf\n", x1, x2);
			} else {
				printf("Nemaye diysnyh rozvyazkiv\n");
			}
		}
	} else {
		if(a == 0){
			printf("\t%.0lfx + %.0lf = 0\n", b, c);
			x = -c/b;
			printf("\tx = %lf\n", x);
		}
	}
	
	system("pause");
	return 0;
}
