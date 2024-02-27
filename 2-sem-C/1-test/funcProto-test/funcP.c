#include <stdio.h>

void hello(char[], int);

int main(){
    char name[] = "Miro";
    int age = 19;
    hello(name,age);
}

void hello(char name[], int age){
    printf("Hello Mr/Mrs %s\n",name);
    printf("You are: %d years old!\n",age);
}