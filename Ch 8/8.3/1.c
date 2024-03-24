#include <stdio.h>

 main()
 {
    int rows, cols;
    
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    int arry[rows][cols];
    
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
         {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arry[i][j]);
        }
    }
    
    int sum = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            sum += arry[i][j];
        }
    }
    
   float average = (float)sum / (rows * cols);
    
    printf("Average of an Array: %.2f\n", average);
 
}
