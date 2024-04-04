#include <stdio.h>

int main(){
    char text [20];
    scanf("%s",&text);//-32 A-Z [65 <= 90]
    for(int i = 0; i < 20; i++){
        if(text[i] == '\0'){
            break;
        }
        if((int)text[i] >= 65 && (int)text[i] <= 90){
            continue;
        }else if((int)text[i] >= 97 && (int)text[i] <= 122){
            text[i] = (char)((int)text[i] - 32);

        }
    }
    printf(text);
    return 0;
}