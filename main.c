#include <stdio.h>

int main(void)
{
int giorno1,giorno2,mese1,mese2,anno1,anno2,GiorniTot1 ,GiorniTot2, diffGiorni ;
    printf("Inserisci la prima data (gg mm aaaa): \n");
    scanf("%d %d %d " ,&giorno1,&mese1,&anno1);
    printf("Inserisci la seconda data (gg mm aaaa): \n");
    scanf("%d %d %d " ,&giorno2,&mese2,&anno2);
    GiorniTot1 = giorno1 + mese1 *30 + anno1 *360;
    GiorniTot2 = giorno2 + mese2 *30 + anno2 *360;
    diffGiorni = GiorniTot1 - GiorniTot2;
    giorno1 = diffGiorni%30;
    mese1 = (diffGiorni/30)%12;
    anno1 = diffGiorni/360;
    printf ("%d : %d : %d " ,giorno1,mese1,anno1);

    return 0;
}
