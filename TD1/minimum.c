#include <stdio.h>

float min(float tab[], int taille){
	float min = tab[0];
	int i;
	for(i=1;i<taille;i++){
		if(tab[i] < min){
			min = tab[i];
		}
	}
	return min;
}

int indice_min(float tab[], int taille){
	int i;
	int i_min = 0;
	for(i=1;i<taille;i++){
		if(tab[i] < tab[i_min]){
			i_min = i;
		}
	}
	return i_min;
}

void affiche(float tab[], int taille){
	int i;
	for(i=0;i<taille;i++){
		printf("%f\t", tab[i]);
	}
	printf("\n");
}

/*Q3
La deuxieme fonction permet d'avoir a la fois de recuperer l'indice du minimum ainsi que
sa valeur contrairement à la premiere qui ne donne que la valeur. */

int main(){
	int n = 5;
	float tab[] = {6.0, 2.0, 5.0, 3.0, 4.0};
	affiche(tab, n);
	printf("Le minimum est %f et son indice est %d\n", min(tab, n), indice_min(tab, n));
	return 0;
}

