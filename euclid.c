#include <stdio.h>

int hcf(int , int);

void main()
{
 int a,b;
 printf("This is a program to find HCF of two numbers using Euclid's Division Algorithm\n");
 printf("Enter any two numbers : \n");
 scanf("%d %d", &a, &b);
 printf("HCF of %d & %d is : ",a,b);
 a>b?printf("%d\n",hcf(a,b)):printf("%d\n",hcf(b,a));
}

int hcf(int a, int b)
{
 int r,q;
 
 r=a%b;
 q=a/b;

 if(r==0)
 {
  return b;
 }
 else
 {
  hcf(b,r);
 }
}
