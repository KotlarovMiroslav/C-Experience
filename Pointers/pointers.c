#include <stdio.h>
#include <string.h>
void initialise(int *p){
    *p = *(p) + 101;
}

struct Human{
    int age;
    char* name;
};
typedef struct Human Human;

void setAge(int* ageSetter){
    int age;
    printf("\nSet age: ");
    scanf("%d",&age);
    *ageSetter = age;
    
}
// void setName (char** nameSetter){
//     char name[4];
//     printf("\nSet name: ");
//     scanf("%s", &name);
//     **nameSetter = &name;
// }

int main(){
    // int x = 5;
    // int *p = &x;
    // printf("%d",*p);
    // int arr[5] = {1,2,3,4,5};
    // int *test = arr;
    // for(int i = 0; i < 5; i++){
    //     printf("%d\n", *test + i);
    // }
    // int *p = arr;
    // for(int i = 0; i < sizeof(arr)/sizeof(*p); i++){
    //     printf("\n%d",*p + i);
    //     if(i >= 5){
    //         printf("%s","Stopped");
    //         return 0;
    //     }
    // }
    //int num = 15;
    // int *p = &num;
    // printf("%d\n",num);
    // initialise(p);
    // printf("%d\n",num);

    
    // Human person1;
    // person1.name = "Joro";
    // person1.age = 0;
    // int* ageSetter = &person1.age;
    // char** nameSetter = &person1.name;
    // printf("%s", *nameSetter);
    // setAge(ageSetter);
    // printf("The age of %s is %d\n",person1.name, person1.age);
    // printf("The age of %s is %d\n",person1.name, person1.age);
    // setName(nameSetter);
    // printf("The age of %s is: %d\n",person1.name, person1.age);

    char names[2][10] = {{"Googool"},{"Koko"}};
    char name[] = "Debi";
    /*
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 10; j++){
            if(*(*(&names[0] + i)+j) == NULL){
                break;
            }
            printf("%c",*(*(&names[0] + i)+j));
        }
        printf("\n");
        
    }*/

    printf("%zu\n", &names[0] + 1);
    printf("%zu\n", names);
    printf("%zu\n", &names + 1);
    return 0;
}