#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct{
    string names;
    string numbers;
}pb;

int main(void){
    pb people[2];
    people[0].names="Omar";
    people[0].numbers="012345";
    
    people[1].names="Ali";
    people[1].numbers="0104288";
    
    for(int i=0;i<2;i++){
        if(strcmp(people[i].names,"Ali")==0){
            printf("Found %s\n", people[i].numbers);
            return 0;
            
        }
        
    }
    printf("Not Found \n");
    return 1;
}