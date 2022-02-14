#include <stdio.h>

int main()
{
   int i,j,r,c,mul[r][c],arr1[r][c],arr2[r][c];
   scanf("%d %d",&r,&c);
for(i = 1; i <= r; i++){
    for(j = 1; j <= c; j++){
       scanf("%d",&arr1[i][j]);
    }
}
for(i = 1; i <= r; i++){
    for(j = 1; j <= c; j++){
       scanf("%d",&arr2[i][j]);
    }
}
for(i = 1; i <= r; i++){
    for(j = 1; j <=c; j++){
    mul[i][j] = arr1[i][j] * arr2[j][i] + arr1[i][j+1] * arr2[j+1][i];
       printf("%d\n",mul[i][j]);
    }
}
    return 0;
}

