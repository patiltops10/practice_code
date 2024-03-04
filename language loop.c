//#include<stdio.h>

//void main(){
//int num =4;
//for(int row =1; row<=num; row++){
    //for(int col =num; col>=row; col--){

//printf(" ");
   // }
   // for(int col = 1; col<=row;col++){

       // printf(" *");

   // }
       // printf("\n");
    // }
//}



#include<stdio.h>
void main(){
    int num =5;
    for(int row =1; row<=num; row++){
            for(int col =1;col<=num; col++){
                    if((row+col)%2==0){
                    printf("| ");
            }else{
                printf("* ");
            }
        }
    printf("\n");
  }
}
