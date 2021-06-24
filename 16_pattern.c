/*
C program to print the following pattern 
       *
      * *
     * * *
    * * * *
   * * * * *
*/

#include <stdio.h>

int main(){
    int i,j,k;
    // printf("Enter the value of row and column\n");
    // scanf("%d%d",&row,&col);
    for(i=1;i<=5;i++){

             k=1;

          for(j=1;j<=9;j++){
              if(j>=6-i && j<=4+i && k){  
                  printf("*");
                  k=0;
              }
              else{
                  printf(" ");
                  k=1;
              }
          }
          printf("\n");
    }
    return 0;
}