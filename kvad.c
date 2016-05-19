#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x1,x2,d;
	int a, b, c;
	printf("a*x^2 + b*x +c = 0\n");
	
	printf("Vvedite a:");
	scanf("%d", &a);
	printf("Vvedite b:");
	scanf("%d", &b);
	printf("Vvedite c:");
	scanf("%d", &c);
	
	printf("%d*x^2 + &d*x + %d = 0\n", a, b, c);
	
	d = b * b - 4 * a * c;
	if (d == 0) {
		x1 = -b / (2*a);
		printf("x=%lf", x1);
	} else {
		if (d > 0) {
			x1 = (-b + sqrt(d))/ (2*a);
			x2 = (-b - sqrt(d))/ (2*a);
			printf("x1=%lf, x2=%lf", x1, x2);
		} else {
			printf("Nemaye diysnyh rozvyazkiv");
		} 
	}
	
	system("pause");
		return 0;
}
