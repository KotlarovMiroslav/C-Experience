#include <stdio.h>
#include <string.h>
int isInArray(char letter ,char* letArr){
    int result;
    for(int i = 0; i < 20; i++){
        if(letter == letArr[i]){
            result = 1;
            return result;
        }
        result = 0;
    }
    return result;
}
int findVowels (char* text , char* vowels){
    int counter = 0;
     for(int i = 0; i < 5;i ++){

            for(int j = 0 ; j < 20; j++){
                if(text[i] == '\0'){
                    break;
                }
                if(text[j] == vowels[i]){
                    counter += 1;
                }
            }
        }
        return counter;
}
int main(){
    char text[20];
    scanf("%s",&text);
    char vowels[] = {'a','o','e','u','i'};
    
    if(text != NULL){
       
    }else{
        printf("THERE IS NOTHING!\n");
    }
    printf(" Vowels counted: %d\n", findVowels(text,vowels));
    return 0;
}
