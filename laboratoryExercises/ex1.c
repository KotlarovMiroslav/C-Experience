#include <stdio.h>

int stringLen(char* buff){
    int size = 0;
    for(int i = 0; sizeof(buff)/sizeof(buff[i]); i++){
        if(*(buff+i) == '\0'){ //ili \n ako rabotim s fgets
            return size;
        } 
        size += 1;
    }
    return size;
}

int main(){
    char input [20];
    printf("Enter a word or a name and I will return the size of the string: ");
    scanf("%s",&input);
    printf("%d\n",stringLen(input));

    return 0;
}
