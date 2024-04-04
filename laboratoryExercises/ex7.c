#include <stdio.h>
void findOccurrances(char* text, char* letters){
    int counter;
    for(int curLetter = 0; curLetter < 2; curLetter++){
        counter = 0;
        for(int i = 0; i < 50; i++){
            if(text[i] == '\0'){
                break;
            }
            if(letters[curLetter] == text[i]){
                counter += 1;
            }
        }
        printf("Result for chosen char %c : %d\n",letters[curLetter], counter);
    }
}

int main(){
    printf("Enter text: ");
    char text[50];
    scanf("%s", &text);
    getchar();
    char a,b;
    printf("Enter char 1: ");
    scanf("%c", &a);
    getchar();
    printf("Enter char 2: ");
    scanf("%c", &b);
    getchar();
    char letters[] = {a,b};
    findOccurrances(text, letters);
    
    return 0;
}