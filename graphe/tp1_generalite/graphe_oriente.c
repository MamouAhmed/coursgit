/* Les membres du groupe de TP (groupes de 2 au maximum, redoublants seuls) :
NOM1 MAMOU Ahmed
NOM2 CHAKCHOUK Loic
*/
#include <stdio.h>
#include <stdlib.h>

#define NMAX 100  /* nombre maximum de sommets */

int G[NMAX+1][NMAX+1];  /* la matrice d'adjacence du graphe */
int n; /* le nombre de sommets */

void lire_graphe() {
  int i,j,o,e,m;

  scanf("%d",&n); /* nb de sommets */
  if (n > NMAX) {
    fprintf(stderr, "PB : Le nombre de sommets %d est plus grand que NMAX = %d\n", n, NMAX);
    exit(1);
  }
  scanf("%d",&m); /* nb d'arcs */
  
  for (i = 1; i <= n; i++) 
    for (j = 1; j <= n; j++) 
      G[i][j] = 0;
  
  for (i = 1; i <= m; i++) {
    /* lecture de l'arc (o,e) */
    scanf("%d", &o);
    scanf("%d", &e);
    if ((o < 1) || (e < 1) || (o > n) || (e > n)) {
      fprintf(stderr, "arc (%d,%d) non valide\n",o ,e);
      exit(1);
    }
    G[o][e] = 1;
  }
}

void afficheMADJ() {


}


int main() {
  /* à completer */

  lire_graphe();
  afficheMADJ();
  printf("salut, ça marche");
  return 0;
}
