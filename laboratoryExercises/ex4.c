#include <stdio.h>
int compare(char* text1, char* text2){ //True = 1  False = 0
    for(int i = 0; i < 20; i++){
        if(text1[i] == '\0' || text2[i] == '\0'){
            if(text1[i] == '\0' && text2[i] == '\0'){
                return 1;
            }else{
                return 0;
            }
        }
        if(text1[i] - text2[i] != 0){
            return 0;
        }
    }
}
int main(){
    char text1[20];
    char text2[20];
    scanf("%s",&text1);
    scanf("%s",&text2);
    
    if(compare(text1,text2)){
        printf("YAY!");
    }else{
        printf("NAY!");
    }
    return 0;
}