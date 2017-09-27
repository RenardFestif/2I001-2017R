/*Q1
On souhaite rentrer au moins une fois dans la boucle et on ne connait pas le nombre d'iteration,
donc la boucle la plus adapté est un do while */

#include <stdio.h>
#define PRECISION 0.00001

int main(){

	float pidiv4 = 0.0;
	float pidiv4_i;
	float erreur;
	float signe = 1.0;
	int nombre = 1;

	do{
		pidiv4_i = pidiv4 +signe / nombre;
		erreur = (pidiv4 - pidiv4_i) * 4.0;
		signe = -signe;
		nombre = nombre + 2;
		pidiv4 = pidiv4_i;
	}while((erreur >= 2.0 * PRECISION) || (erreur <= -2.0 * PRECISION));

	printf("PI vaut %f\n", pidiv4 * 4.0);

	return 0;
}