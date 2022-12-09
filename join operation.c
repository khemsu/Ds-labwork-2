#include<stdio.h>
#define M 3
#define N 3
int main() 
{
    int a[M][N], b[M] [N], c [M][N],i,j;
    printf("Enter the element of first 3*3 boolean matrix \n");

    for (i=0;i<M;i++){
        for (j=0;j<N;j++){
            scanf("%d",&a[i][j]);
            }
    }
    printf("Enter element of second 3*3 boolean matrix\n");
    for (i=0;i<M;i++){
        for (j=0;j<N;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The joint matrix is: \n");
    for (i=0;i<M;i++){
        for (j=0;j<N;j++){
            c[i][j]=a[i][j]||b[i][j];
            printf("%d",c[i][j]);
        }
        
    }
    return 0;
}