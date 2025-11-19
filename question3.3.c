#include<stdio.h>
    int main(){
        int x,y;
         printf("enter the x- coordinate:");
         scanf("%d",&x);

         printf("enter the value of y- coordinate:");
         scanf("%d",&y);

         if(x==0 && y==0){

         printf("the point is at the origin");


         }else if(x>0 && y>0){
          printf("the point line in quadrant I");

         }else if(x<0 && y>0){
         printf("the point line quadrant II");

         }else if(x<0 && y<0){
         printf("the point line in quadrant III");

         }else if(x>0 && y>0){
         printf("the point line quadrant IV");



          }
    }

