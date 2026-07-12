#include<stdio.h>
#include"assi4.h"
#include<stdint.h>

void Bubble_sort (u32 arr[] , u32 size){
   register u32 i,j ;
   for(u32 i=0 ; i<SIZE-1 ; i++){
       for(u32 j=0; j<SIZE-i-1 ; j++){
         while (arr[j]>arr[j+1]){
           u32 temp =arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;

         }
       }
   }
}

void swap (u32 *a , u32 *b){
     u32 temp =*a;
     *a=*b;
     *b=temp;

}