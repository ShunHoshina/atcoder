#include <stdio.h>
int main (void){
    int n, k, i;
    scanf("%d%d",&n, &k);
    int str[n];
    for (i=0; i<n; i++){
        scanf("%d",&str[i]);
    }
    for (i=0; i<k; i++){
        str[n-i]=0;
    }
    printf("%d",str[n]);
    return 0;
}