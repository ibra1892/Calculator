#include <stdio.h>
#include<stdlib.h>

float sum(float num1, float num2);
float eject(float num1 ,float num2);
float square(float num1 , float num2);
float crash(float num1 , float num2);
float division(float num1 , float num2);

int main() {
    
    printf("\n<----Hesap Makinesi---->\n");
    float num1 ,num2;
    printf("\nBirinci sayiyi giriniz..:");
    scanf("%f",&num1);
    
    printf("\n--->Menu<---\n");
    
    int choose;
    printf("\nToplama islemi icin -> 1\nCikarma islemi icin -> 2\nCarpma islemi icin -> 3");
    printf("\nBolme islemi icin -> 4\nKare alma islemi icin -> 5 ");
    
   
    while(1)
    {
        if(choose < 6  && choose > 0)
        {
            break;
        }
        else
        {
            printf("\nLutfen 1 ile 5 arasi bir sayi seciniz..:");
            scanf("%d",&choose);
            continue; 
        }
        
    }
    printf("\nIkinci sayiyi giriniz..:");
    scanf("%f",&num2);
   
    
    if(choose == 1)
    {
        float result = sum(num1 , num2);
        printf("\n%.2f + %.2f = %.2f",num1,num2,result);

    }
    if(choose == 2)
    {
        float result = eject(num1,num2);
        printf("\n%.2f - %.2f = %.2f",num1,num2);
    }

    if(choose == 5)
    {
        float result = square(num1 , num2);
        printf("\n(%.2f)^(%.2f) = %.2f",num1,num2,result);
    }
    if(choose == 3)
    {
        float result = crash(num1 , num2 );
        printf("\n %.2f x %.2f = %.2f",num1,num2,result);
    }
   if(choose == 4)
   {
      float result = division(num1 ,num2);
      printf("(%.2f)/(%.2f) = %.2f",num1,num2,result);
   }

   main();
    return 0;
}

float sum(float num1, float num2)
{
    return num1 + num2;
}

float eject(float num1, float num2)
{
    return num1 - num2;
}

float square(float num1, float num2)
{
    float sonuc = 1;
    for(int i = 0; i < num2; i++)
    {
       sonuc *= num1;
    }

    return sonuc;
}

float crash(float num1, float num2)
{
    return num1 * num2;
}

float division(float num1, float num2)
{
    return (num1)/(num2);
}
