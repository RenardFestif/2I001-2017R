#include "utilitaires_tableaux.h"
#include <stdlib.h>
#include <stdio.h>



void triRapide(int tab[], int n) {
  if(n>1){
    int i;
    int *tab1 = nouveau_tableau(n-1);
    int *tab2 = nouveau_tableau(n-1);
    int i1 = 0;
    int i2 = 1;
    for(i=1;i<n;i++){
      if(tab[i] <= tab[0]){
	tab1[i1++] = tab[i];
      }
      else{
	tab2[i2++] = tab[i];
      }
    }
    triRapide(tab1,i1);
    triRapide(tab2,i2);
    tab[i1] = tab[0];
    for(i=0;i<i1;i++){
      tab[i] = tab1[i];
    }
    for(i=0;i<i2;i++){
      tab[i+i1] = tab2[i];
    }
    detruire_tableau(tab1);
    detruire_tableau(tab2);
  } 
}


int partitionner(int tab[], int s, int n){
      int p = tab[0];
      int i = s-1;
      int j = n+1;

      do{
	do{
	  j=j-1;
	}while(tab[j] > p);
	do{
	  i=i+1;
	}while(tab[i] < p);
	if(i<j){
	  echanger_elem_tab(tab,i,j);
	}
	else{
	  return j;
	}
      }while(1);
}

void triRapideAmeliore(int tab[], int s, int n){
  if(n-s >= 1){
    int i = partitionner(tab,s,n);
    triRapideAmeliore(tab,s,i-1);
    triRapideAmeliore(tab,i,n);
  }
}
