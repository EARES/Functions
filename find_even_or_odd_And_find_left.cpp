#include<stdio.h>
int tekmiciftmi(int sayi)
{
     if(sayi%2==0)
     {
     printf(" sayisi cifttir.");
     return 0;
}
     else{
     printf(" sayisi tektir.");
     return 1;
}
 }
int main()
{
    int a,deger;
    printf("Lutfen sayiyi giriniz: ");
    scanf("%d",&a);
    deger=tekmiciftmi(a);
    printf("\ndeger= %d",deger);
    getchar();
    getchar();
    return 0;
}

