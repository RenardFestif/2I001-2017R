#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utilitaires_tableaux.h"
#include "tri_bulle.h"

#define N 10

int main (){

  int tab[N];

  srand(time(NULL));

  init_tab_alea(tab,N);

  triBulle(tab,N);

  if(tab_trie(tab,N))
    printf("True\n");
  else
    printf("False\n");

  return 0;
}


  
