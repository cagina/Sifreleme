#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sifreleme_yada_cozme(char [],int);  // Ayni alt algoriyma icinde yapabiliyoruz sebebi ise 'xor' islemi yaptigimiz icin.Sifreli metinde bu sekilde isleme girerse ana mesaj ortaya cikiyor..
int main()
{
    int secim,mesaj_karakter_sayisi,i;
    char sifreli_metin[250];
    system("cls");
    char yazismada_kullanilan_harf_yada_sayilar[]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ." ;
    printf("\n --- SIFRELEME PROGRAMI ---");
    printf("\n\nSifreleme veya cozum (0-sifre-1-cozum-2-cikis) =  ");

    scanf("%i",&secim);
    if(secim==0)
    printf("\n\n Sifreli metin ==>  ");
    else if(secim==1)
    printf("\n\n Gercek metin ==>   ");
    sifreli_metin=sifreleme_yada_cozme(yazismada_kullanilan_harf_yada_sayilar,secim);
    mesaj_karakter_sayisi=strlen(sifreli_metin);
    for(i=0;i<mesaj_karakter_sayisi;i++)
    printf("%c",sifreli_metin[i]);
    if(secim==3)
    {
        scanf("%d",&secim);
        return 0;
    }

}
char[] sifreleme_yada_cozme(char yazismada_kullanilan_harf_yada_sayilar[],int secim)
{
    char mesaj[250],parola[250],sifreli_metin[250];

    int parola_metninde_hangi_harfte_oldugunu_gosteren_sayac=-1,i,a,mesaj_karakter_sayisi,parola_karakter_sayisi,mesaj_metnindeki_bir_harfin_yazismada_kullanilan_harf_yada_sayilar_icindeki_yeri,

    parola_metninin_icindeki_bir_harfin_yazismada_kullanilan_harf_yada_sayilar_icindeki_yeri,yazismada_kullanilan_harf_yada_sayilar_icindeki_yeri;

     if(secim==0)
     printf("\nMesaji girin:  ");
     else
     printf("\nSifreli mesaji girin:  ");

     fflush(stdin);
     gets(mesaj);

     printf("\nParola girin:  ");
     fflush(stdin);
     gets(parola);

     mesaj_karakter_sayisi=strlen(mesaj);
     parola_karakter_sayisi=strlen(parola);

     for(i=0;i<mesaj_karakter_sayisi;i++)
      {
             ++parola_metninde_hangi_harfte_oldugunu_gosteren_sayac;

             if(parola_metninde_hangi_harfte_oldugunu_gosteren_sayac==parola_karakter_sayisi)

             parola_metninde_hangi_harfte_oldugunu_gosteren_sayac=0;

          for(a=0;a<64;a++)
            {

               if(mesaj[i]==yazismada_kullanilan_harf_yada_sayilar[a])

               mesaj_metnindeki_bir_harfin_yazismada_kullanilan_harf_yada_sayilar_icindeki_yeri=a;

               if(parola[parola_metninde_hangi_harfte_oldugunu_gosteren_sayac]==yazismada_kullanilan_harf_yada_sayilar[a])

               parola_metninin_icindeki_bir_harfin_yazismada_kullanilan_harf_yada_sayilar_icindeki_yeri=a;
           }

              yazismada_kullanilan_harf_yada_sayilar_icindeki_yeri=mesaj_metnindeki_bir_harfin_yazismada_kullanilan_harf_yada_sayilar_icindeki_yeri^parola_metninin_icindeki_bir_harfin_yazismada_kullanilan_harf_yada_sayilar_icindeki_yeri;

              sifreli_metin[i]=yazismada_kullanilan_harf_yada_sayilar[yazismada_kullanilan_harf_yada_sayilar_icindeki_yeri];

     }
      return sifreli_metin;
      main();



}
