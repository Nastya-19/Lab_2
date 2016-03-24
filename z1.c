#include <stdio.h>
#include <stdlib.h>

int chislo(int p);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int p, c, i;
	printf("Vvedite chislo p:");
	scanf("%d", &p);
	c = chislo(p);
	if (c == 1) {
		printf("Eto chislo prostoe\n");
	} else {
		printf ("Eto chislo ne prostoe\n");
	}
	
	printf("menshie prostie chisla:");
	for (i = 1; i < p; i++){
		c = chislo(i);
		if (c ==1){
			printf ("%d ", i);
		}
	}
	
	return 0;
}

int chislo (int p) {
	int i = 2, ostacha;
	while (i < p){
		ostacha = p%i;
		if (ostacha == 0)
		return 0;
		i++;
	}
	return 1;
}
