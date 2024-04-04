//ALTERNATIVNA IDEA IZPOLZVAI STRCAT() I STRCHR() VURHU STRING ZA DA RABOTI KATO DICT PRIMER MiroM => "M2i1r1o1" izpolzvaiki strchr moje da nameri adresa i sled tova adresa+1 chrez atoi() da promeni value-to i da go set-ne kato tekst chrez itoa()

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
int main(){
    char text[20];
    scanf("%s",&text);
    char letterOccurances [20];
    int letterAmount [20];
    int writerIndex = 0;
    if(text != NULL){
        for(int i = 0; i < 20; i ++){
            if(text[i] == '\0'|| text[i] == '\n'){
                break;
            }
            if(isInArray(text[i],letterOccurances)){
                for(int j = 0; j < 20; j++){
                    if(text[i] == letterOccurances[j]){
                        letterAmount[j] += 1;
                    }
                }
            }else{
                letterOccurances[writerIndex] = text[i];
                letterAmount[writerIndex] = 1;
                writerIndex += 1;
            }
            
        }

    }else{
        printf("THERE IS NOTHING!\n");
    }
    

    for(int index = 0; index < writerIndex; index++){
        printf("%c:",letterOccurances[index]);
        printf(" %d\n",letterAmount[index]);
    }
    return 0;
}
