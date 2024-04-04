#include <stdio.h>
int findWordAmount(char* buff){
    int index = 0;
    int wordCounter = 0;
    while(buff[index] != '\0'){
        if((buff[index] == ' ' || buff[index] == '\n') && index > 0 && buff[index - 1] != ' '){
            wordCounter += 1;
        }
        index += 1;
    }
    return wordCounter;
}

int main(){
    char input [50];
    fgets(input, 50, stdin);
    printf("Words amount: %d\n" , findWordAmount(input));
    return 0;
}