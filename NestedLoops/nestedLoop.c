#include <stdio.h>

int main(){
    int rows;
    int cols;
    char sign;
    printf("How many rows?\n");
    scanf("%d",&rows);
    printf("How many cols?\n");
    scanf("%d",&cols);
    getchar();
    printf("Choose sign\n");
    scanf("%c",&sign);
    for(int x = 0; x < rows; x++){
        for(int y = 0; y < cols; y++){
            printf("%c",sign);
        }
        printf("\n");
    }


    

}