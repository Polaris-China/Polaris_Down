#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
double   fun(int  m)    //计算 s=根号下ln（1）+……+ln(m)
{
    double s = 0;
    int i = 0;
    double add = 0;
    for (i = 1; i <= 20; i++)
    {
        add += log(i);      //不能直接用ln    
    }
    s = sqrt(add);
    return s;

}

void main()
{
    void NONO();
    printf("%f\n", fun(20));
    NONO();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    FILE* fp, * wf;
    int i, n;
    double s;

    fp = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 10; i++) {
        fscanf(fp, "%d", &n);
        s = fun(n);
        fprintf(wf, "%f\n", s);
    }
    fclose(fp);
    fclose(wf);
}

