/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on February 20, 2019, 8:12 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
float a, b;
printf("PT bậc nhất ax+b=0\n");
    printf("Nhập số a : "); scanf("%f", &a);
    printf("Nhập số b : "); scanf("%f", &b);
    if(a==0 && b==0)printf("pt vô nghiệm\n");
    else if(a==0 && b !=0) printf("pt vô nghiệm\n");
    else printf("pt có nghiệm x=%0.1f\n", -b/a); 
      
    return (EXIT_SUCCESS);
}

