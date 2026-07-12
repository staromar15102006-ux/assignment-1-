#include<stdio.h>
#include"assi4.h"
#include<stdint.h>

int main(){
u32 arr[5]={0};
u32 x=0;
u32 y=0;
printf(" Enter 5 integers Numbers : \n");
for(u32 i=0 ; i<SIZE ; i++){
scanf(" %d " , &arr[i]);
}
 
Bubble_sort(arr ,5);

printf("the sorted array : ");
for(u32 i=0; i<SIZE ; i++){
    printf(" %d ", arr[i]);
}

printf("Enter the two number to swap : ");
scanf("%d %d ", &x , &y);


swap(&arr[x],&arr[y]);
 
printf(" after swapping : ");
for(u32 i=0; i<SIZE ;i++){
    printf("%d",arr[i]);
}



    return 0;
}