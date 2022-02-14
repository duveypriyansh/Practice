#include <stdio.h>

int main()
{
   int i,j,r,c,arr1[r][c];
   scanf("%d %d",&r,&c);
for(i = 1; i <= r; i++){
    for(j = 1; j <= c; j++){
       scanf("%d",&arr1[i][j]);
    }
}
for(i = 1; i <= c; i ++){
    for(i = 1; i <= r; i++){
printf("%d",&arr1[i][j]);
}
}
    return 0;
}

