#include "practise_4.c"
#include <stdio.h>

void page_108(){
    printf("%lf\n", POS_INFINITY);
    printf("%lf\n", NEG_INFINITY);
    printf("%lf\n", NEG_ZERO);
}

void ex1_1(){
    int x = 1<<31;
    printf("%d\n",x-1);
}

void ex1_2(){
    if(-1){
        printf("-1");
    }else{
        printf("askdfj");
    }
}

void ex1_3(){
    unsigned int t = 0xbfffffff;
    float a = *(float*)&t;
    int b = (int)a;
    printf("%f \t %d", a, b);
}

void ex1_4(){
    unsigned int a = 0xffffffff;
    printf("%u %u %u\n",a,a>>2, a<<-2);
}

void ex1_5(){
    unsigned int a = 32;
    printf("%d", -1*a);
}

int main(int argc, char const *argv[])
{
    // ex1_1();
    ex1_5();
    // page_108();
    return 0;
}
