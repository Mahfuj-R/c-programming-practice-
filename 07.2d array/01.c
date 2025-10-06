#include<stdio.h>
int main()
{
    int p ,k;
    printf("enter p & k \n");
    scanf("%d %d", &p, &k);
    int arr[p][k];

    printf("Enter array elements \n");

    for(int i=0; i<p; i++)
    {
        for(int j=0;j<k;j++)
        {
            scanf("%d", &arr[i][j]);
        }

    }

    printf("output is : \n");

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<k;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }


    return 0;

    

}