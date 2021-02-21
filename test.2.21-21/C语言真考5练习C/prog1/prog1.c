#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define  M  4
#define  N  5
int fun( int a [M][N])
{
  int i,j,sum=0;
  for(i=0;i<M;i++)
     for(j=0;j<N;j++)
         if(i==0||i==M-1||j==0||j==N-1)   /*只要下标中有一个为0或M-1或N-1，则它一定是周边元素*/
            sum=sum+a[i][j];              /*将周边元素相加*/
  return sum;
}
void main()
{
  FILE *wf;
  int aa[M][N]={{1,3,5,7,9},{2,9,9,9,4},{6,9,9,9,8},{1,3,5,7,0}};
  int i, j, y;
  system("CLS");
  printf ("The original data is :\n ");
  for(i=0; i<M;i++)
     {for (j=0; j<N;j++) 
          printf("%6d ",aa[i][j]);
      printf("\n ");
     }
  y=fun(aa);
  printf("\nThe sun: %d\n ",y);
  printf("\n ");
/******************************/
  wf=fopen("out.dat","w");
  fprintf (wf,"%d",y);
  fclose(wf);
/*****************************/
}
