// WAP to do matrix multiplication

#include<stdio.h>

void main(){
    int arr1[100][100], arr2[100][100], mul[100][100];
    int r1, cr, c2;
    printf("Enter No of Rows of matrix 1 columns of matrix 1 and Columns of matrix 2:\n"); 
    scanf("%d%d%d", &r1, &cr, &c2);
    printf("Enter elements of matrix 1: \n");
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<cr; j++){
            printf("arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of matrix 2: \n");
    for(int i = 0; i<cr; i++){
        for(int j = 0; j<c2; j++){
            printf("arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i = 0; i<r1; i++){
        for(int j = 0; j<c2; j++){
            mul[i][j] = 0;
            for(int k = 0; k<cr; k++){
                mul[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("New Matrix Element\n");
    for(int i = 0; i<r1; i++){
        for(int j=0; j<c2; j++){
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }
}