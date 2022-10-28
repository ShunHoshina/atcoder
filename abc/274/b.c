#include <stdio.h>
int main (void){
    int h, w;
    scanf ("%d%d", &h, &w);
    char c[h][w];
    int i=0, j=0;
    for (j; j<w; j++){
        i=0;
        for (i; i<h; i++){
            scanf("%s",&c[i][j]);
        }
    }
    
}