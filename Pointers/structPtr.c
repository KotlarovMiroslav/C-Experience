#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Car{
    char** brand;
}Car;

int main(){
    Car* myCarPtr;
    myCarPtr = malloc(sizeof(Car));
    int inputSize;
    printf("Enter how many brands you want: ");
    scanf("%d",&inputSize);
    getchar();
    myCarPtr->brand = malloc(sizeof(char*) * inputSize);
    char buff[20];
    for(int i = 0; i < inputSize; i++){
        printf("Give brand name: ");
        fgets(buff,20,stdin);
        buff[strlen(buff) - 1] = '\0';
        myCarPtr->brand[i] = malloc(strlen(buff));
        strcpy(myCarPtr->brand[i], buff);
   }
   #
   for (int i = 0; i < inputSize; i++) {
        free(myCarPtr->brand[i]);
    }
    free(myCarPtr->brand);
    free(myCarPtr);

    return 0;
}