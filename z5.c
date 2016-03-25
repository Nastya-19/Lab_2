#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double dodanok = 1, znamen, sum = 0;
	double factorial = 1;
	int i;
	
	for (i = 1; dodanok >= 0.001; i++) {
		factorial *= i;
		znamen = (3 * pow(i,i));
		dodanok = factorial/znamen;
		sum = sum + dodanok;
		printf ("\n%lf", dodanok);
		
	}
	printf("\nsuma = %lf", sum);
	return 0;
}
