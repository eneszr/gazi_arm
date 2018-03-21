#include <stdio.h>

int main(void)
{
   char x;
   int c = 0,b;
   int sonuc=55;
    printf("Ilk sayiyi girin = !\n");
   scanf("%d",&c); printf("%d",c);
    printf("Toplama icin 't' , cıkarma icin 'c' , carpma icin 'r', bolme icin b girin = !\n");
printf("%d",c);
    scanf("%s",&x);



    switch(x)
    {

            case 't':    printf("toplamadesin= !\n"); break;
            case 'c':    printf("cıkarmadesin= !\n");break;
            case 'r':    printf("carpmadesin= !\n");break;
            case 'b':    printf("bolmedesin= !\n");break;


    }
    printf("ikinci sayiyi girin = !\n");
    scanf("%d",&b);

    switch(x)
    {

            case 't':   sonuc = (c + b); break;
            case 'c':   sonuc = c - b; break;
            case 'r':   sonuc = c * b; break;
            case 'b':   sonuc = c / b; break;


    }
    printf("%d",c);
    return 0;
}

