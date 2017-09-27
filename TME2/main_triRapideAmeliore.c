#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utilitaires_tableaux.h"
#include "tri_rapide.h"

#define N 10

int main (){

  int tab[N];

  srand(time(NULL));

  init_tab_alea(tab,N);

  triRapideAmeliore(tab,0,N);

  if(tab_trie(tab,N))
    printf("True\n");
  else
    printf("False\n");

  return 0;
}
