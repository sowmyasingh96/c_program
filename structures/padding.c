#include<stdio.h>

struct xyz{
    int a;
    char *b;
    float c;
    double d;
};

void main(){
    struct xyz A={20,"aaa",2.34,23456.222};
    printf("%d %s %.2f %lf\n", A.a ,
    A.b,
A.c,
A.d);
printf("%ld\n",sizeof(int));
printf("%ld\n",sizeof(char));
printf("%ld\n",sizeof(float));
printf("%ld\n",sizeof(double));
printf("%ld\n",sizeof(struct xyz));
}