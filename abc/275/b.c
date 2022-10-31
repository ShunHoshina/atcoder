/*======================================================================
Project Name    : <abc275 b.c>
File Name       : <b.c>
Encoding        : <utf-8>
Creation Date   : <2022/10/29>
 
Copyright © <2022> <Shun Hoshina>. All rights reserved.
 
This source code or any portion thereof must not be  
reproduced or used in any manner whatsoever.
======================================================================*/
#include <stdio.h>
#include <math.h>
int main(void){
    double a, b, c, d, e, f, math;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    math = ((a*b*c)-(d*e*f));
    //math = ((a*b*c)-(d*e*f)) % 998244353;
    //double fmod(double math, double 998244353);
    //printf("%f\n", math);
    printf("%.f", fmod(math, 998244353));
}