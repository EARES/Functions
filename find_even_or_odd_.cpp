#include<stdio.h>
char tekmiciftmi(int sayi)
{
     if(sayi%2==0)
     return 'a';

     else
     return 'b';

 }
int main()
{
    int a;
    char deger;
    printf("Lutfen sayiyi giriniz: ");
    scanf("%d",&a);
    deger=tekmiciftmi(a);
    if(deger=='a')
    printf("Cift %c",deger);
    else
    printf("Tek %c",deger);
    getchar();
    getchar();
    return 0;
}



