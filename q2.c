#include <stdio.h>
int main() 
{
    int rows,cols,sum = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&rows,&cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("The sum of Matrix:%d",sum);

    return 0;
}