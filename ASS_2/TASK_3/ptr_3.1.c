#include <stdio.h>
#include <stdint.h>
#include"assi3.h"

u32 sumMainDiagonal(u32 matrix[3][3] ){
u32 sum =0;
register u32 i ;
for(i=0 ; i<3 ; i++){
  sum +=matrix[i][i];
}
return sum;
}

void searchElement(u32 *ptr , u32 target){
register u32 i,j;
u32 found =0;
for(i=0 ; i<3 ; i++){
   for(j=0 ; j<3 ; j++){

      if(*(ptr + i*3 + j)== target){

        printf(" element is found in row %d column %d \n" , target ,i , j);
        found=1;
      }
}
}
if(!found){
    printf("element is not found :\n ");
}
}