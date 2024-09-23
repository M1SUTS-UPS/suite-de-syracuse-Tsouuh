/*Ginoux Laëtitia & Raharijaona-Ndrianarilala Mandimbihaja Onenantsoa*/


#include <stdio.h>
#include <stdlib.h>

void syracuse(int u, int un, int i, int max);











int main () {     
	int u=0, un=0, i=0, max=0 ;
	
	while (u < 1){
		printf("choisissez une valeur entière de u0 supérieur à 1:\n");
		scanf("%d",&u);
	}
	
	syracuse(u, un, i, max);
	
}

void syracuse(int u, int un, int i, int max){

	FILE *file;
	
	file = fopen("syracuse.txt","w");

	fprintf(file,"%d	%d\n",i,u);
	while ( u > 1 ){
		if (u >= max){max=u;}
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
		fprintf(file,"%d	%d\n",i,u);
		
		
	}
	printf("Le nombre d'itération est %d\n",i);
	printf("L'altitude est %d\n",max);
	
	fclose(file);


}

