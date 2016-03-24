#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int argc, char *argv[]){
	int n, i = 0;
	printf("Vvedite n:");
	scanf("%d", &n); 
	
	while (n != 0) {
		n = n/10;
		i++;
	}
	printf("Vashe chislo imeet %d cufru\n", i);
	
	system ("pause");
	return 0;
}
