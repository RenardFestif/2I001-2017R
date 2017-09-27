#include <stdio.h>

int facto_ite(int n){
	int i;
	int fact = 1;
	for(i=2;i<=n;i++){
		fact *= n;
	}
	return fact;
}

int facto_rec(int n){
	if(n <= 1){
		return 1;
	}
	return n * facto_rec(n-1);
}

int main(){
	int nb = 12;
	printf("Factorille de %d vaut %d\n", nb, facto_rec(nb));
	return 0;
}