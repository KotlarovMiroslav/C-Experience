#include <stdio.h>
#include <ctype.h>

int main(){
    char userInput;
    float temp;

    printf("Choose mesurement system: \'C\' or \'F\'\n");
    scanf("%c",&userInput);
    userInput = toupper(userInput);
    if(userInput == 'C'){
        printf("Enter temp in C: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("Temp in F is: %.1f",temp);
    }else if (userInput == 'F'){
        printf("Enter temp in F: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("Temp in C is: %.1f",temp);
    }else{
        printf("bruh");
    }
    return 0;
}
