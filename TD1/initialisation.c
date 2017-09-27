#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 7
#define MAX 10

void init(int tab[], int taille){
	int i;
	for(i=0;i<taille;i++){
		tab[i] = rand()%MAX;
	}
}

void affichage(int tab[], int taille){
	int i;
	for(i=0;i<taille;i++){
		printf("%d\t", tab[i]);
	}
	printf("\n");
}

void somme(int tab1[], int tab2[], int tab3[], int taille){
	int i;
	for(i=0;i<taille;i++){
		tab3[i] = tab1[i] + tab2[i];
	}
}

int main(){
	int tab1[TAILLE];
	int tab2[TAILLE];
	int tab3[TAILLE];

	srand(time(NULL));

	init(tab1,TAILLE);
	init(tab2,TAILLE);
	affichage(tab1,TAILLE);
	affichage(tab2,TAILLE);
	somme(tab1,tab2,tab3,TAILLE);
	affichage(tab3,TAILLE);

	return 0;
}