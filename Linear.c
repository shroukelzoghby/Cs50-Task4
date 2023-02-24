#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void){
    //LINEAR SEARCH.......
   /* int number[]={0,1,4,6,2,7,9};
    for(int i=0;i<7;i++){
        if(number[i]==7){
            printf("Found in %i steps \n",i+1);
            return 0;
        }
    }
    printf("Not Found\n");
   return 1;*/
    string names[]={"Shrouk","Mai","Salma","Noha","Nada"};
    for(int i=0;i<5;i++){
        if(strcmp(names[i],"Salma")==0){
             printf("Found in %i steps \n",i+1);
            return 0;
            
        }
    }
     printf("Not Found\n");
     return 1;
     
    
     
}