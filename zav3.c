#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m, n, r;
	printf ("m >= n\n");
	printf("Vvedite n:");
	scanf("%d", &n);
	printf("Vvedite m:");
	scanf("%d", &m);
	
	for ( ; n != 0; ){
		r = m%n;
		m = n;
		n = r;
	}
	printf("NOD = %d", m);
	
	return 0;
}
