#include <stdio.h>
 
int main(int argc, char* arvg[]){
    int number = 0;
    int pid,status;
 
    printf("Please enter a number \n");
    scanf("%d", &number);
 
    if(number < 0) {
        printf("Please enter a positive number, greater than 0 \n");
        scanf("%d", &number);
    }
 
    pid = fork();
 
    if(pid < 0) {
        printf(" Could not to create Child\n");
        exit(-1);
    }
 
    else if(pid == 0){
        do{
            if(number%2 != 0){
                number = (number*3)+1;
            }
            else if(number%2 == 0){
                number = number/2;
            }

        printf("%d \n",number);
        }
    while(number != 1);
    }
 
    else{
        printf("pid %d \n",pid);
        printf("Waiting on child process to finish \n");
        wait(&status);
    }
return 0;
}