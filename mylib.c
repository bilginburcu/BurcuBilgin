#include "mylib.h"
#include <math.h>
#include <stdio.h>
//Harf olup olmadığını kontrol eden fonksiyon
/*
int isLetter(char c)
{
    
    if((c>='a'&&c<='z')||(c>='A'&& c<='Z'))
    {
       return 1;
    }
    else 
    {
        return 0;
    }
} */

//Sayı olup olmadığını kontrol eden fonksiyon
/*

int isDigit(char c)
{
    if(c>='0'&&c<='9')
    {
        return 1;
    }
    return 0;
}
*/

//Girilen sayının cift sayi olup olmadügünü kontrol eder
/*
int isEven(int value)
{
    if((value%2==0)||(value==0))
    {
        return 1;
    }
    else  return 0;
}
*/

//sayinin asal olup olmadigini kontrol eden fonksiyon
/*

int isPrime(int value)
{
        for(int i=2;i<value;i++)
    {
        if(value%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
*/
//sayinin basamaklari toplamini hesaplayan fonksiyon
/*
int digitSum(int value)
{
int kalan=value%10;
int bolum=value/10;
while(bolum!=0)
{
    kalan=kalan+bolum%10;
        bolum=bolum/10;

}
return kalan;
}
*/

// sayinin tersini hesaplayan fonksiyon
/*
int reverseNumber(int value);
*/

// kucuk harfi buyuk harfe ceviren fonksiyon
/*
void upperCase(char c)
{
if(c>='a'&&c<='z')
{
    printf("%c\n", c-32);
    
}

}
*/
// buyuk harfi kucuk harfe ceviren fonksiyon
/*
void downcase(char c)
{
    if(c>='A'&&c<='Z')
    {
        printf("%c\n",c+32);
    }
}
*/

// karakterin buyuk harf olup olmadini kontrol eden fonksiyon 
/*
int isUpperCase(char c)
{
    if(c>='A'&&c<='Z')
    {
    
    return 1;
    }
    
    return 0;
}
*/

// faktoriyel hesabi yapan fonksiyon
/*
int factoriel(int value)
{
    int fact=1;
    if(value>0)
    {
        for(int i=1; i<=value;i++)
    {
        fact=fact*i;
    }
    
    return fact;
    }
    else
    {
        return 1;
    }
}
*/

// ust hesabi yapan fonksiyon
/*
int power(int base, int degree)
{
    int power=1;
    if(degree!=0)
    {
     for(int i=1;i<=degree;i++)
        {
           power=power*base;
        }
        return power;
    }

    return 1;
}
*/

// toplama hesabi yapan fonksiyon
/*
int add(int value1, int value2)
{
    return (value1+value2);
}
*/

// ikinci dereceden bir bilinmeyenli denklemin koklerini hesaplayan fonksiyon 
/*
void findRoots(int a, int b, int c)
{
    int delta=b*b-4*a*c;

if(delta>0)
{
    int kok1=(-b+sqrt(delta))/2*a;
    int kok2= ( -b-sqrt(delta))/2*a;
 printf("iki reel kok vardir:%d,%d\n",kok1,kok2);

}
else if(delta==0)
{
    int kok3= -b/(2*a);
    printf("cakısık iki kok vardir:%d\n",kok3);

}
else
{
    printf("reel kok yoktur.\n");
}


}
*/

// sayinin palindrome olup olmadigini hesaplayan fonksiyon
/*
int isPalindromeNumber(int value)
{
    int i_digit;
    int basamak_sayisi=1;
    while((value/10)!=0)
    {
        basamak_sayisi= basamak_sayisi+1;
        value/10;
    }
    if(basamak_sayisi%2==0)
        {
            for(int i=0;i<=(n/2);i++)
            {
                i_digit= (value/(10^i))%10;
                    for(int j=basamak_sayisi;j>basamak_sayisi/2;j--)
                    {

                    }
            }

        }

}
*/

// dizinin min sayisini hesaplayan fonksiyon
/*
int findMin(int *arr, int size)
{
    int min= arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;

}
*/
// sayinin tersini hesaplayan fonksiyon

int reverseNumber(int value)
{
    int kalan = 0;
    int sonuc = 0;
    while(value!=0)
    {
        kalan = value%10;
        sonuc = sonuc*10 + kalan;
        value /= 10;

    }
        return sonuc;
}


// sayinin palindrome olup olmadigini hesaplayan fonksiyon
int isPalindromeNumber(int value)
{
    int value_tersi=reverseNumber(value);
    if(value==value_tersi)
    {
        return 1;
    }
    return 0;
}

// metnin palindrome olup olmadigini hesaplayan fonksiyon
int isPalindromeText(char *c, int size)
{
    int flag=0;
    for(int i=0; i<size;i++)
    {
    if(c[i]==c[size-1-i])
        flag=1;
    else
        flag=0;

    }
    if(flag==1) 
        return 1;
    else
        return 0;
}





































