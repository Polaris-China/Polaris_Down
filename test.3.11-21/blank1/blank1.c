#include  <stdio.h>
void fun(char  *s, int  a, double  f)
{
/**********found**********/
  FILE* fp;
  char  ch;
  fp = fopen("file1.txt", "w");
  fprintf(fp, "%s %d %f\n", s, a, f);
  fclose(fp);
  fp = fopen("file1.txt", "r");
  printf("\nThe result :\n\n");
  ch = fgetc(fp);
/**********found**********/
  while (!feof(fp)) 
{
/**********found**********/
	putchar(ch); 
	ch = fgetc(fp); 
}
    putchar('\n');
    fclose(fp);
}
void main()
{ char  a[10]="Hello!";    int  b=12345;
  double  c= 98.76;
  fun(a,b,c);
}

