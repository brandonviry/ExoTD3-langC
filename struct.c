#include <stdio.h>
#include <stdlib.h>
struct identification
{
    char nom[100];
    char prenom[100];
    long date;
    char classe[100];
};
typedef struct identification id ;

void affiche(id* speudo)
{
(*speudo).nom ="viry";
(*speudo).prenom ="brandon";
(*speudo).date =3;
(*speudo).classe ="2aL2Info";
}
int main(int argc, char *argv[])
{
   id hsk;
   affiche(&hsk);
   printf("%s %s %ld %s ",hsk.nom,hsk.prenom,hsk.date,hsk.classe);
    
    return 0;
}
