/*Ginoux Laëtitia & Raharijaona-Ndrianarilala Mandimbihaja Onenantsoa*/


#include <stdio.h>
#include <stdlib.h>


int main () {     
	int u, un, i=0;
	printf("choisissez une valeur de u0 supérieur à 1:\n");
	scanf("%d\n",&u);
	while (u < 1){
		printf("choisissez une valeur de u0 supérieur à 1:\n");
		scanf("%d\n",&u);
	}
	while ( u > 1 ){
		if (u%2==0){
		
			un = u/2;
			u  = un;
			i  = i+1;
		}
		else {
		
			un = 3*u + 1;
			u  = un;
			i  = i+1;
		}
		
		printf("%d",u);
	}
}

