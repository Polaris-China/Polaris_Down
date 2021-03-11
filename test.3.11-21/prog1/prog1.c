#include<stdio.h>
#define  M  3
#define  N  4
void fun(char (*s)[N],char *b)
{
    int i = 0, j = 0,k=0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j <M; j++)
        {
            b[k++] = s[j][i];
        }
    }
    b[k] = '\0';
}
void main()
{ 
  FILE *wf;
  char a[100],w[M][N]={{ 'W', 'W', 'W', 'W'},{'S', 'S', 'S', 'S'},{'H', 'H', 'H', 'H'}};
  int i,j;
  printf("The matrix:\n");
  for(i=0;i<M;i++)
     { for(j=0;j<N;j++) 
          printf("%3c",w[i][j]);
       printf("\n");
     }
  fun(w,a);
  printf("The A string:\n");
  puts(a);
  printf("\n\n");
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%s",a);
  fclose(wf);
/*****************************/
}
