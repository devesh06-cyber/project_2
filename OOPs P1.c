#include<stdio.h>

  void main(){

    int A[5],gr,loc;
 
    printf("Enter 5 numbers:\n");
    for(int i=0; i<5;i++){
        scanf("%d",&A[i]);
    }
     gr=A[0];
     loc=0;
    for(int i=1;i<5;i++){
       
        if(A[i]>gr){
            gr=A[i];
            loc=i;
        }
    }

      printf("Gretest number = %d",gr);
     printf("\nAnd its location is %p",&A[loc]);
  }