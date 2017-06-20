#include<stdio.h>
void tekmiciftmi(int a)
{
     if(a%2==0)
     printf("%d sayisi even.",a);
     else
     printf("%d sayisi odd.",a);
 }
int main()
{
    int a;
    printf("Lutfen sayiyi giriniz: ");
    scanf("%d",&a);
    tekmiciftmi(a);
    getchar();
    getchar();
    return 0;
}


