#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, drib, sum = 0;
	int factorial = 1;
	printf("Vvedite n:");
	scanf("%d", &n);
	for (i = 1; i < n; i++){
		factorial *= i;
		drib = (1/(pow(i, 2)));
		sum = sum + drib + factorial;
	}
	printf("suma = %d", sum);
	return 0;
}
