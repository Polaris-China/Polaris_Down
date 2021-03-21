#include <stdio.h>
char  *fun ( char *s,  char *t)
{
int i,j;
  for(i=0;s[i]!= '\0';i++);
  for(j=0;t[j]!= '\0';j++);
  if(i<=j)         
     return t;     
  else 
     return s;
}

void main( )
{ char a[20],b[20];
  void NONO (  );
  printf("Input 1th string:") ;
  gets( a);
  printf("Input 2th string:") ;
  gets( b);
  printf("%s\n",fun (a, b ));
  NONO ();
}

void NONO ( )
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *fp, *wf ;
  int i ;
  char a[20], b[20] ;

  fp = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(fp, "%s %s", a, b) ;
    fprintf(wf, "%s\n", fun(a, b)) ;
  }
  fclose(fp) ;
  fclose(wf) ;
}
