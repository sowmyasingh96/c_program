#include<stdio.h>

struct car{
    int car_num;
    char car_name[20];
    char car_fuel[20];
    float car_mileage;
};
int main(void){
    struct car a={1212,"taxi","diesel",12.07};
    printf("%d %s %s %f",
           a.car_num,
           a.car_name,
           a.car_fuel,
           a.car_mileage);
           return 0;
    
}