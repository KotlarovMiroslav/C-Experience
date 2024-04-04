#include <stdio.h>
#include <string.h>
char* remLetters(char* text, unsigned int start, unsigned int end){
    
}

int main(){
    char text[50];
    printf("Enter text:");
    scanf("%s",&text);
    getchar();
    int start;
    int end;
    printf("Enter start:");
    scanf("%d",&start);
    getchar();
    printf("Enter end:");
    scanf("%d",&end);
    getchar();
    char excChar;
    printf("Enter excluding char: ");
    scanf("%c",&excChar);
    getchar();
    char result[50];

    int sizeOfResult = 1;
    
    for(int i = 0; i < 50; i ++){
        if (text[i] == '\0'){
            break;
        }

        if((i >= start) && (i <= end)){
            continue;
        }else{
            if(text[i] == excChar){
                continue;
            }
            result[sizeOfResult-1] = text[i];
            sizeOfResult +=1;
        }
    }
    printf("\n");
    result[sizeOfResult] = '\0';
    for(int i = 0; i < 50; i++){
        if(result[i] == '\0'){
            break;
        }
        printf("%c",result[i]);
    }
    return 0;
}