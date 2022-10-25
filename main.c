#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("---> HESAP MAKINESI <---\n\n");

    int x,y,toplam,fark,carpim,bolum;
     int i ;
    printf("BIRINCI SAYIYI GIRINIZ: ");
    scanf("%d",&x);

    printf("IKINCI SAYIYI GIRINIZ: ");
    scanf("%d",&y);

    printf("\n\n   TOPLAMA: 1\n   CIKARMA: 2\n   CARPMA:  3\n   BOLME:   4\n");
    printf("YAPMAK ISTEDIGINIZ ISLEMI SECINIZ: ");
    scanf("%d",&i);

    switch(i)
    {




        case 1 :
            toplam=x+y;
            printf("\n\nSONUC: %d",toplam);
         break;

        case 2 :
             fark=x-y;
             printf("\n\nSONUC: %d",fark);
        break;

        case 3 :
            carpim=x*y;
            printf("\n\nSONUC: %d",carpim);
        break;

        case 4 :
            bolum=x/y;
            printf("\n\nSONUC: %d",bolum);
         break;

        default : printf("\n\nYAPMAK ISTEDIGINIZ ISLEM ALGILANAMADI:(");
         break;
    }

    return 0;
}
