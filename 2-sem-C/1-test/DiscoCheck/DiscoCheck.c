#include <stdio.h>

char checkAge(int age){
    return (age >= 18) ? printf("Welcome to the club buddy! Enjoy!\n") : printf("Get arra here!\n");
}

int main(){
    int age;

    printf("Welcome to the underground disco what's your age?\n");
    scanf("%d",&age);
    
    // if(age >= 18){
    //     printf("Welcome to the club buddy! Enjoy!\n");
    // }else{
    //     printf("Get arra here!\n");
    // }
    checkAge(age);
    
    return 0;
}