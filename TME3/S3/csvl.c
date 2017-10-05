#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int compte_mots_chaine(char *chaine) {
  int nb_mots = 0;
  while(*chaine){
  	if(*chaine == ' '){
  		chaine++;
  		continue;
  	}
  	nb_mots++;
  	while((*chaine != ' ') && (*chaine)){
  		chaine++;
  	}
  }
  return nb_mots;
}

int nb_char(char chaine){
	int i = 0;
	while(chaine[i]){
		i++;
	}
	return i;
}

char **decompose_chaine(char *chaine)
{
  int i;
  int len = compte_mots_chaine(chaine);
  int nb = 0;
  char **tab = (char**) malloc(len+1 * sizeof(char));
  if(tab == NULL){
  	printf("Erreur allocation\n");
  	exit(1);
  }
  for(i=0;i<len;i++){
  	nb = nb_char(chaine[i]);
  	tab[i] = (char*) malloc(nb +1 * sizeof(char));
	tab[i] = chaine[i];
	  
  }
  tab[i+1] = NULL;
	
  return tab;
}

char *compose_chaine(char **ptab_mots)
{
  /* a completer */
}
		
char **detruit_tab_mots(char **ptab_mots)
{
  int i=0;
  if(ptab_mots[i]){
  	while(ptab_mots[i]){
  		free(ptab_mots[i++]);
  		free(ptab_mots);
  	}
  }
  return NULL;
}

int compte_mots(char **ptab_mots)
{
  int cpt = 0;
  while(ptab_mots[cpt])
  	cpt++;
  return cpt;
}

void affiche_tab_mots(char **ptab_mots)
{
  int i;
  while(ptab_mots[i]){
  	printf("%s \n", ptab_mots[i]);
  	i++;
  }
}

char **reduit_tab_mots(char **ptab_mots)
{
  /* a completer */
}
