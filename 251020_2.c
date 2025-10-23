#include <stdio.h>

int main(void)
{
    
    /*
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            if(j<9){
                printf("%d * %d = %d\n", i, j, i*j);
            }
            if(j==9){
                printf("%d * %d = %d\n", i, j, i*j);
                printf("------------------\n");
            }
        }
    }
    */

    int k=1;
    while(k<=9){
        int l=1;
        while(l<=9){
            if(l<9){
                printf("%d * %d = %d\n", k, l, k*l);
            }
            if(l==9){
                printf("%d * %d = %d\n", k, l, k*l);
                printf("------------------\n");
            }
            l++;
        }
        k++;
    }
    


    return 0;
}