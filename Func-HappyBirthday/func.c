#include <stdio.h>

void hbty(){
    printf("Happy birthday to you!\n");
}
void birthdayVerse(char name[]){
    hbty();
    hbty();
    printf("Happy birthday dear %s!\n",name);
    hbty();
}

int main(){
    char name[] = "Miro";
    birthdayVerse(name);

    return 0;
}    