#include <stdio.h>
int main(void){
    int a, b, ans =1, i;
    scanf("%d%d", &a, &b);
    if(b==0){
    }else{
        for (i=0;i<b;i++){
            ans = ans * a;
        }
    }
    printf("%d", ans);
    return 0;
}