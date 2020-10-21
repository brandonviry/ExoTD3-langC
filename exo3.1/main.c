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
scanf("%d", &t.heures);
scanf("%d", &t.minutes);
scanf("%d", &t.secondes);


 return t;

}
void afficheTemps(struct temps t)
{
     printf("%d:%d: %d\n", t.heures, t.minutes, t.secondes);
}
int main(void)
{   Temps t;
    t=  saisieTemps();
    afficheTemps( t);

}


