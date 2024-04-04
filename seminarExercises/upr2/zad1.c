#include <stdio.h>
void printUpperLeftSide(int n,int row){
    if(row % 2 == 0){
        for (int i = 0; i < n - 2;i++){
            printf("-");
        }
    }else{
        for (int i = 0; i < n - 2;i++){
            printf("*");
        }
    }
    printf("\\ ");
}
void printUpperRightSide(int n, int row){
    printf("/");
    if(row % 2 == 0){
        for (int i = 0; i < n - 2;i++){
            printf("-");
        }
    }else{
        for (int i = 0; i < n - 2;i++){
            printf("*");
        }
    }
    printf("\n");
}
void printLowerLeftSide(int n , int row){
    if(row % 2 == 0){
        for (int i = 0; i < n - 2;i++){
            printf("-");
        }
    }else{
        for (int i = 0; i < n - 2;i++){
            printf("*");
        }
    }
    printf("/ ");
}
void printLowerRightSide(int n, int row){
    printf("\\");
    if(row % 2 == 0){
        for (int i = 0; i < n - 2;i++){
            printf("-");
        }
    }else{
        for (int i = 0; i < n - 2;i++){
            printf("*");
        }
    }
    printf("\n");
}
int main(){
    printf("Enter a number for butterfly drawing: ");
    int n;
    scanf("%d", &n);
    //shirina 2*n-1 = 5
    //visochina 2*(n-2)+1 = 3
    //lqva polovina i dqsna polovina sa shiroki n-1
    // n = 3
    //*\ /*
    //  @  
    //*/ \*
    double halfHeight = (2*(n-2)+1)/2.0;//1.5
    int midlePart = 1;
    for(int i = 1; i <= 2*(n-2)+1; i++){
        if(i < halfHeight){
            printUpperLeftSide(n, i);
            printUpperRightSide(n, i);
        }else if(i > halfHeight){
            if(midlePart){
                for(int i = 0; i < (2*n-1)/2; i++){
                    printf(" ");
                }
                printf("@");
                printf("\n");
                midlePart = 0;
            }else{
                printLowerLeftSide(n,i);
                printLowerRightSide(n,i);
            }
        }
    }
    return 0;
}