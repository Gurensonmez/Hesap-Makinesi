#include <stdio.h>
#include <stdlib.h>
	
int main(int argc, char *argv[])
{
float sayi1,sayi2;
char islem;
printf("1.Sayiyi giriniz:");
scanf("%f",&sayi1);
printf("2.Sayiyi giriniz:");
scanf("%f",&sayi2);
printf("\n\n1.Toplama\n");
printf("2.Cikarma\n");
printf("3.Bolme\n");
printf("4.Carpma\n");
printf("\nIslemi seciniz:");
scanf("%s",&islem);
switch(islem){
case '1':
printf("Toplama isleminin sonucu : %f",sayi1 + sayi2);
break;
case '2':
printf("Cıkarma isleminin sonucu : %f",sayi1 - sayi2);
break;
case '3':
printf("Bolme isleminin sonucu : %f", sayi1 / sayi2);
break;
case '4':
printf("Carpma isleminin sonucu : %f", sayi1 * sayi2);
break;
default:
printf("Lutfen gecerli bir sayi giriniz..");
}
}