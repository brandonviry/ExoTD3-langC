#include <stdio.h>
#include <stdlib.h>
struct temps {
 int heures;
 int minutes;
  int secondes; };
// Afin de faciliter la manipulation du type struct temps // on creer un synonyme Temps a l’aide de la commande typedef
typedef struct temps Temps;

Temps saisieTemps(void)
{
 struct temps t ;
 t.heures=0;
 t.minutes=5;
 t.secondes=4747;

}
void afficheTemps(struct temps t)
{
     printf("%d:%d: %d\n", t.heures, t.minutes, t.secondes);
}
int main(void)
{   Temps t;
    saisieTemps();
    afficheTemps( t.heures, t.minutes, t.secondes);

}


