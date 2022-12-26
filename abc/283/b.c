#include <stdio.h>
int main(void){
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    //クエリ
    scanf("%d", &n);
    int kueri, kueri1, kueri2, kueri3;
    for (i=0;i<n;i++){
        scanf("%d", &kueri);
        if(kueri==2){
            scanf("%d", &kueri1);
            printf("%d\n", a[kueri1 - 1]);
        }
        if(kueri==1){
            scanf("%d%d", &kueri2, &kueri3);
            a[kueri2 - 1] =kueri3;
        }
    }
    //printf("%d", a[0]);
    return 0;
}