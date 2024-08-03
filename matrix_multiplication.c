//important info..result matrix's size  will be first matrix row X second matrix column
//if r1 == c1 then it can be multiplication.
#include<stdio.h>
int main()
{
    int first [10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and column for 1st matrix: ");
    scanf("%d  %d", &r1, &c1);
    printf("Enter rows and column for 2nd matrix: ");
    scanf("%d  %d", &r2, &c2);

    while(c1!=r2)
    {
        printf ("Error!! Column of First matrix not equal to row of Second matrix");

        printf("Enter rows and column for 1st matrix: ");
        scanf("%d  %d", &r1, &c1);
        printf("Enter rows and column for 2nd matrix: ");
        scanf("%d  %d", &r2, &c2);
    }

    printf("\nEnter elements for 1st Matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("first [%d][%d]= ",i,j);
            scanf("%d", &first[i][j]);
        }
    }
    printf("\nEnter elements for 2nd Matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("second [%d][%d]= ",i,j);
            scanf("%d", &second[i][j]);
        }
    }
        for(i=0;i<r1;i++)
   {
         for(j=0;j<c2;j++)
   {
         for(k=0;k<c1;k++)
         {
           sum = sum + first[i][k]*second[k][j];
         }

       result[i][j] = sum;
        sum = 0;
      }
    }


    printf("\n\nFirst Matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%d ", first[i][j]);
        printf("\n");
    }

       printf("\n\nSecond Matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d ", second[i][j]);
        printf("\n");
    }

     printf("\n\nResult Matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
}
