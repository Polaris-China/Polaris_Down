#include <stdio.h>
void  fun(char  *p, char  *b)
{  int   i, k=0;
   while(*p)
   {  i=1;
      while( i<=3 && *p ) {
/**********found**********/
          b[k]=*p;
          k++; p++; i++;
      }
      if(*p)
     {
/**********found**********/
         b[k]=' ';k++;
      }
    }
    b[k]='\0';
}
void main()
{  char  a[80],b[80];
   printf("Enter a string:      ");  gets(a);
   printf("The original string: ");  puts(a);
   fun(a,b);
   printf("\nThe string after insert space:   ");  puts(b); printf("\n\n");
}

