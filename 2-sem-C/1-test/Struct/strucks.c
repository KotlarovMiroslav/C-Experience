#include <stdio.h>
#include <string.h>

struct Person{
    char name[15];
    int age;
    char id[10];
};

void setHumanName(struct Person, char[]);

int main(){
    struct Person human1 = {"Miroslav", 19, "0450239898"};
    printf("Hello, %s\n",human1.name);
    // printf("%s",name);

    return 0;
}
