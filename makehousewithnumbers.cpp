#include<stdio.h>
void roof(void)
{
printf("   /\\  \n");
printf("  /  \\  \n");
printf(" /    \\  \n");
}
void house(void)
{
     int sayi=1;
     char k='a';
printf("%c%c%c%c%c%c\n",k,k,k,k,k,k);
printf("%d      %d\n",sayi,sayi);
printf("%d      %d\n",sayi,sayi);
printf("%d      %d\n",sayi,sayi);
//printf("%c%c%c%c%c%c\n",k,k,k,k,k,k);
}
int main()
{
    roof();
    int i;
    for(i=0; i<10; i++)
    house();    
getchar();
getchar();
return 0;
}



