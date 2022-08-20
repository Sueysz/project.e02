#include <stdio.h>
#include <stdlib.h>

void main ()
{
    // je veux une variable qui s'appel i et l'additioner avec e et je veux additionner le resultat de i+e par lui même qui seras la variable r

    int i = 1;
    int e = 2;
    int r = 0;
    int t = 2;
    while (r < 4000000) {
        r = i + e ;
        i = e ;
        e = r ;
    // je n'avais pas mis le ==0 du coup if démarrer le calcule avec un chiffre impaire
        if (r % 2 == 0) {
            t = t + r;
            printf("%d\n",t);
        }

    }

    printf("%d", r);
}



