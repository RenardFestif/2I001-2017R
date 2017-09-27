#include <stdio.h>

int pair(int nb);
int impair(int nb);

int pair(int nb){
	if(nb == 0){
		return 1;
	}
	return impair(nb-1);
}

int impair(int nb){
	if(nb == 0){
		return 0;
	}
	return pair(nb-1);
}

/*Q2
La compilation va echouee car pair ne connait pas impair et inversement.
On peut soit rajouter des prototypes, soit utiliser un fichier header.*/

int main(){
	int n=10;
	printf("%d est-il pair? %d\n", n, pair(n));
	return 0;
}