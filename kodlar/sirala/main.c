#include <stdio.h>
int sayilar[6] = {50,-85,92,12,-3,0};
int sonuc[6]= {0,0,0,0,0,0};
int i=0;
int main(void)
{
    for(int b=0;b<6;b++)
    {
        printf("%d inci sayiyi girin ...",b+1);
        scanf("%d",&sayilar[b]);
    }
    for(int z =0; z<6;z++)
    {
      for(int y=0;y<6;y++)
      {
         if (sayilar[i]<sayilar[y])
        {
              i=y;
        }
      }
      sonuc[z]=sayilar[i];
      sayilar[i]=-9999;
      i=0;
    }
    for(int a=5 ; a>=0; a--)
    {
        printf("%d \n",sonuc[a]);
    }
}


