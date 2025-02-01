#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include"user/registration.c"
#include"user/login.c"
int mainoption = 0;
void screen(){
    printf("welcome page\n\n\n");
    printf(" Please enter 1 for login and 2 for registration: ");
    scanf("%d",&mainoption);
}
int main(){
     screen();
      if(mainoption == 1){
    dolog();
      }
      else if(mainoption == 2){
        doreg();
      }
      else{
        printf("invalid option");
      }
    // printf("hello world");
  
    return 0;
}