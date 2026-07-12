#include <stdio.h>
#include <stdint.h>
#include"assi3.h"

int main(){
u32 matrix[3][3]={0};
u32 target =0;
register u32 i,j;
printf("Enter the element of the matrix : \n");
for(u32 i=0; i<3 ;i++){
   for(u32 j=0; j<3 ;j++){
scanf("%d" , &matrix[i][j]);
   }
}


printf(" the matrix is : \n ");
 for(u32 i=0; i<3 ; i++){
    for(u32 j=0; j<3 ; j++){
printf(" %d ",matrix [i][j]);
    }
    printf("\n");
 }

u32 sum = sumMainDiagonal(matrix);
printf("the sum of the mainDIAGONAL :%d \n", sum);


printf(" Enter element that you want to search about : ");
scanf("%d" ,&target);
searchElement (&matrix[0][0], target);


    return 0;
}