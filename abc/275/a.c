/*======================================================================
Project Name    : <abc275 a.c>
File Name       : <a.c>
Encoding        : <utf-8>
Creation Date   : <2022/10/29>
 
Copyright © <2022> <Shun Hoshina>. All rights reserved.
 
This source code or any portion thereof must not be  
reproduced or used in any manner whatsoever.
======================================================================*/
#include <stdio.h>
int main(void){
    int n, i, high, count=0;
    scanf("%d", &n);
    int h[n];
    for(i=0; i<n; i++){
        scanf("%d", &h[i]);
    }
    high = h[0];
    i=0;
    for(i=1; i<n; i++){
        if(high<h[i]){
            high =h[i];
            count=i;
        }
    }
    count++;
    printf("%d\n", count);
}