#include<stdio.h>

int sumofDiag(int a[100][100], int m, int n){
    int sum=0;
    for (int i=0; i<m; i++){
    for(int k=0; k<n;k++){
        if(i==k){
        sum += a[i][k];
             }
    
          }
     }
 return sum;
}

void main()
{

    int a[100][100];
    printf("enter matrix order:\n");
    int m,n;
    printf("enter number of rows: ");
    scanf("%d",&m);
    printf("enter number of columns: ");
    scanf("%d",&n);

    printf("enter the value:\n");
    for (int i=0; i<m; i++)
    {
    for(int k=0; k<n;k++){
        printf("Enter the element Matrix[%d][%d]: ", i,k);
        scanf("%d",&a[i][k]);
    }
}

    printf("\nEntered matrix is:\n");
    for (int i=0; i<m; i++)
    {
    for(int k=0; k<n;k++){
        printf("%d ",a[i][k]);
    }
    printf("\n");
 }

int sum;
sum = sumofDiag(a,m,n);
printf("sum of diagonals is : %d",sum);

}