#include <stdio.h>
#include <math.h>
#include "mylib.h"

// to complile from terminal, run: gcc test.c mylib.c -o ApplicationName -lm
// to run the complied application, run: ./ApplicatioName

int main(void)
//Haf olup olmadığını kontrol eder
/*
{
    
char c;
printf("Enter a character: ");
scanf("%c",&c);
int ret=isLetter(c);
if(ret==1)
    {
     printf("Bir harf girdiniz.");
    }
    else
    {
        printf("Bir harf girmediniz.");
    }
    return 0;
}
*/
/*
//Sayı olup olmadığını kontrol eder
{
char c;
printf("Enter a character: ");
scanf("%c",&c);
int ret=isDigit(c);
if(ret==1)
    {
     printf("Bir rakam girdiniz.");
    }
    else
    {
        printf("Bir rakam girmediniz.");
    }
    return 0;
}
*/
//Cift sayi girilip girilmedigini kontrol eder
/*
{
    int value;
    printf("Bir sayi giriniz: ");
    scanf("%d",&value);
    if (isEven(value)==1)
    {
        printf("Cift bir sayi girdiniz");
    }
    else 
    {
        printf("Tek bir sayi girdiniz");
    }
}
*/
//asal sayi olup olmadigini kontrol eder
/*
{
int value;
printf("Bir sayi giriniz: ");
scanf("%d",&value);
if(isPrime(value)==1)
{
    printf("Asal sayi girdiniz\n");
}
else
{
    printf("Asal olmayan bir sayi girdiniz\n");

}
}
*/
//BAsamaklari toplamini hesaplar
/*
{
int value;
printf("Bir sayi giriniz: \n");
scanf("%d",&value);
printf("%d\n",digitSum(value) );
return 0;
}
*/

//kucuk harfi buyuk harfe cevirir
/*
{
    char c;
    printf("Kucuk harf giriniz: \n");
    scanf("%c",&c);
    upperCase(c);
    return 0;
}
*/

//buyuk harfi kucuk harfe cevirir
/*
{
    char c;
    printf("Buyuk harf giriniz: \n");
    scanf("%c",&c);
    downcase(c);
    return 0;
}
*/

//buyuk harf olup olmadigini kontrol eder
/*
{
    char c;
    printf("Buyuk harf giriniz: \n");
    scanf("%c",&c);   
    int ret=isUpperCase(c);
    if(ret==1)
    {
        printf("Buyu harf girdiniz");

    }
    else
    {
        printf("Buyuk harf girin!");
    }
}
*/

//faktoriyel hesaplar
/*
{
    int value;
    printf("Bir sayi giriniz: \n");
    scanf("%d",&value);
    printf("%d\n",factoriel(value) );
    return 0;
}
*/

//us hesaplar
/*
{
    int base,degree;
    printf("Bir taban ve us giriniz: \n");
    scanf("%d %d",&base,&degree);
    printf("%d nin %d. dereceden ussu %ddir \n",base,degree,power(base,degree));
}
*/

//toplama yapar
/*
{
    int value1,value2;
    printf("iki sayi giriniz: \n");
    scanf("%d %d",&value1,&value2);
    printf("%d\n",add(value1,value2) );
    return 0;
}
*/

//ikinci dereceden bir bilinmeyenli denklemin koklerini soyler
/*
{
    int a,b,c;
    printf("İkinci dereceden bir bilinmeyenli denklemin katsayilarini girin:\n");
    scanf("%d %d %d",&a,&b,&c);
    findRoots(a,b,c);
    return 0;
}
*/



//sayiyi tersine cevirir
/*
{
    int value;
    printf("Bir sayi giriniz: \n");
    scanf("%d",&value);
    printf("%d\n",reverseNumber(value) );
    return 0;
}
*/

//sayinin palindrome olup olmadigini soyler
/*
{
    int value;
    printf("Bir sayi giriniz: \n");
    scanf("%d",&value);
    int ret= isPalindromeNumber(value);
    if(ret==1)
        printf("%d bir palindrome sayidir\n",value );
    
    else
        printf("Bir palindrome sayi girmediniz.\n");
    
}
*/
//Metnin palindrome olup olmadigini soyler
/*

{
    char c[50];
    int size;
    printf("Bir kelime giriniz: ");
    gets(c);
    printf("Metninizin kac kelimeden olustugunu girin: ");
    scanf("%d",&size);
    int ret=isPalindromeText(c,size);
    if(ret==1)
        printf("Kelimeniz palindrome.\n");
    else
        printf("Kelimeniz palindrome degil\n");
    return 0;


}
*/

//girilen harfin sesli harf olup olmadigini soyler
/*
{
    char c;
    printf("Bir harf giriniz: ");
    scanf("%s",&c);
    int ret=isVowel(c);
    if(ret==1)
        printf("Sesli bir harf girdiniz\n");
    else
        printf("Sesli bir harf girmediniz\n");
    return 0;
}
*/





//dizide girilen karakterin olup olmadigini kontrol eder
/*
{   
    int value;
    int dizim[]={3,54,6,7,2,3,43,94,1,123};
    int size=10;
    printf("Bir sayi giriniz: ");
    scanf("%d",&value);
    int ret=exist(dizim,size,value);
    if(ret==1)
        printf("Girdiginiz sayi dizimde var.\n");
    else
        printf("Girdiginiz sayi dizimde yok.\n");
    return 0;
}
*/




//Girilen karakter dizide varsa ilk kacıncı sirada bulundugunu söyler
/*
{
    int value;
    int dizim[]={3,54,6,7,2,3,43,94,1,123};
    int size=10;
    printf("Bir sayi giriniz: ");
    scanf("%d",&value);
    int ret=getIndex(dizim,size,value);
    if(ret!=0)
        printf("%d sayisi %d. sirada\n",value,ret );
    else
        printf("Girdiğiniz sayi dizimde yok.\n");
    return 0;
}
*/



//dizide girilen sayiden kac tane oldugunu söyler
/*
{
    int value;
    int dizim[]={5,56,3,5,12,9,87,5,12,43};
    int size=10;
    printf("Bir sayi giriniz: ");
    scanf("%d",&value);
    printf("Dizimde girdiginiz sayi %d kere var.\n",count(dizim,size,value) );
    return 0;
}
*/



//dizinin maksimum sayisini verir
/*
{
    int dizim[]={3,2,6,4,34,6,5,12,32,7};
    int size=10;
    int max=findMax(dizim,size);
    printf("Bu dizinin maksimum degerli sayisi %d\n",max );
    return 0;
}
*/


//dizinin ikinci en buyuk degerli sayisini verir
/*
{
    int dizim[]={3,2,6,4,34,6,5,12,32,7};
    int size=10;
    int max_2=findMax2(dizim,size);
    printf("Bu dizinin ikinci maksimum degerli sayisi %d\n",max_2 );
    return 0;
} 
*/







//minimum sayiyi bulur
/*

{
    int dizi[]={3,5,2,7,8,4,5};
    int size=7;
    printf("%d\n",findMin(dizi,size) );
    return 0;
}
*/






//dizinin ikinci en kucuk degerli sayisini verir
/*
{
    int dizim[]={3,2,6,4,34,6,5,12,32,7};
    int size=10;
    int min_2=findMin2(dizim,size);
    printf("Bu dizinin ikinci en kucuk sayisi %d\n",min_2 );
    return 0;
} 
*/




//dizinin elemanlari toplamini verir
/*
{
    int dizim[]={3,2,6,4,34,6,5,12,32,7};
    int size=10;
    printf("dizimin elemanlari toplami %d\n",sumArray(dizim,size));
    return 0;
}
*/




// dizinin ortalamasini hesaplayan fonksiyon
/*
{
    int dizim[]={3,2,5,4,34,6,5,12,32,7};
    int size=10; 
    printf("Dizimdeki elemanlarin ortalamasi %2f \n",averageArr(dizim,size) ); 
    return 0;
}
*/




// dizinin standart sapmasini hesaplayar
{
    int dizim[]={46,324,5,876,12345,8,4,23,56,89};
    int size=10; 
    printf("Dizimin standart sapmasi %2fdir\n", deviationArr(dizim,size));
    return 0;
}

















