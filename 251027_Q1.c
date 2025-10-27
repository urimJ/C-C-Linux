#include <stdio.h>

int main(void)
{
    int row_sum = 0;
    int column_sum = 0;
    int total_sum = 0;

    int arr[5][6] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(j<4)
            {
                row_sum += arr[j][i];
            }
            else
            {
                arr[j][i] = row_sum;
                row_sum = 0;
            }
        }   
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(j<5)
            {
                column_sum += arr[i][j];
            }
            else
            {
                arr[i][j] = column_sum;
                column_sum =0;
            }
        }
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            total_sum += arr[i][j];
        }    
    }

    printf("%d\n", total_sum);
    arr[4][5] = total_sum;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<6; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    int vertical_sum = 0;
    for(int i=0; i<4; i++)
    {
        vertical_sum += arr[i][5];
        
    }
    int horizontal_sum=0;
    for(int i=0; i<5; i++)
    {
        horizontal_sum += arr[4][i];
      
    }
    
    if(vertical_sum == horizontal_sum)
    {
        printf("\nthe vertical sum is equal to the horizontal sum(true)\n");
    }
    else{
        printf("\nthe vertical sum is not equal to the horizontal sum(false)\n");
    }
}

/*
[0][0]
[1][0]
[2][0]
[3][0]
=>[4][0]

[0][0] [0][1] [0][2] [0][3] [0][4] => [0][5]

*/