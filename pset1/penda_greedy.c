#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int a=500;
    int b=250;
    int c=200;
    int d=100;
    int e=25;
    int f=10;
    int h=5;
    int i=0;

    int n;
     do
     {
        n = get_int("give your price:");

     }
     while(n<0);
     while(n>=a)
     {
         n=n-a;
         i++;

     }
      while(n>=b)
     {
         n=n-b;
         i++;

     }
      while(n>=c)
     {
         n=n-c;
         i++;

     }
      while(n>=d)
     {
         n=n-d;
         i++;

     }
      while(n>=e)
     {
         n=n-e;
         i++;

     }
      while(n>=f)
     {
         n=n-f;
         i++;

     }
      while(n>=h)
     {
         n=n-h;
         i++;

     }

     {

        printf("nombre de pieces %i\n",i);

     }


}

