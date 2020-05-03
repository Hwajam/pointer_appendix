#include <stdio.h>


int main() {

    int a=10;
    int *pa;
    int b=20;
    int *pb;
    int c=30;
    int *pc = &c;
    int ary[5] = {1,2,3,4};
    int *pary = ary;

    pa=&a;
    pb=&b;

    *pc = 50;
    *pary=100; //pary=100 해도 결과가 같

    int aa = (* ary) + 1;
    int *bb = ary + 1;
    int cc = &ary + 0;
    int dd = &ary + 1;
    int ee = ary + 0;
    int ff = ary + 1;

    printf("*pa : %u\n",*pa);
    printf("*pb : %u\n",*pb);
    printf("*pc %u\n",*pc);
    printf("*pary : %u\n",*pary);
    printf("aa : %u\n",aa);
    printf("bb : %u\n",*bb);
    printf("cc : %u\n",cc);
    printf("dd : %u\n",dd);
    printf("ee : %u\n",ee);
    printf("ff : %u",ff);
}

