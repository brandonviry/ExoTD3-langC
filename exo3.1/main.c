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
 struct temps t = {-2,-2,-2} ;
 while (t.heures > 24 || t.heures < 0)
 { 
  printf("1-SAISIR UNE VALEUR ENTRE 00 - 59 (2 chiffres): ");
scanf("%d", &t.heures);
 }
 while (t.minutes >  59 || t.minutes < 0)
 { 
   printf("2-SAISIR UNE VALEUR ENTRE 00 - 59 (2 chiffres): ");
   scanf("%d", &t.minutes);
 }
 while (t.secondes < 0 || t.secondes>  59){
printf("3-SAISIR UNE VALEUR ENTRE 00 - 59 (2 chiffres) ");
scanf("%d", &t.secondes);
} 

 return t;

}
 int temps2secondes(Temps  t)
 {
   int t0=  t.heures*3600 + t.secondes +t.minutes*60;
   return t0 ;
 
 }
void afficheTemps(Temps t)
{
     printf("%2d:%2d:%2d\n", t.heures, t.minutes, t.secondes);
}
Temps secondes2temps(int sec)
{
  Temps t ;
  t.heures = sec/ 3600;
  t.minutes = (sec% 3600) /60;
  t.secondes = (sec% 3600) %60;
  return t;
}
int main(void)
{   Temps t;
    int a ;
    t=  saisieTemps();
    afficheTemps(t);

    a = temps2secondes(t);
    t= secondes2temps(a);
    printf("%d seconde \n",a);
    afficheTemps(t);
    system("PAUSE");

}


