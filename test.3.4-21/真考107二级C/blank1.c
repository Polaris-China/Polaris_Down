#include  <stdio.h>
int  isleap(int  year)             //�ж���һ���е�ĳһ��
{ int  leap;
  leap= (year%4==0 && year%100!=0 || year%400==0);
/**********found**********/
  return  leap;
}
int fun(int  year, int  month, int  day)
{  int  table[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   int  days=0 , i;
   for(i=1; i<month; i++)
      days=days + table[i];
/**********found**********/
   days=days+day;
   if( isleap(year) && month>2 )
 /**********found**********/
     days=days+1;
   return  days;
}
void main()
{  int  year, month, day, days ;
   printf("�������ꡢ�¡��գ�");
   scanf("%d%d%d",&year, &month, &day);
   days = fun(year, month, day); 
   printf("%d��%d��%d���Ǹ���ĵ�%d��\n",year, month, day, days);
}

