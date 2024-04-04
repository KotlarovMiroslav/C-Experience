#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void inputNumbers(int arr[]){
    int input;
    for(int i = 0; i < 7; i++){
        printf("Choose num %d: " ,i+1);
        scanf("%d",&input);
        if(input > -5000 && input < 5000){
            *(arr + i) = input;
        }else{
            printf("\nThe number is not correct!!");
            exit(1);
        }
    }
}

double sumNums(int arr[]){
    double sum = 0;
    for(int i = 0; i < 7; i++){
        sum += *(arr + i);
    }
    return sum;
}

double findAvrg(int arr[]){
    return sumNums(arr) / 7;
}

int findClosestToAvr(int arr[], double avrg){
    int min = 0;
    for(int i = 1; i < 7; i++){
        if(fabs((double)*(arr+min) - avrg) >= fabs((double)*(arr+i) - avrg)){
            min = i;
        }
    }
    return min;
}

int main(){
    int arr[7];
    inputNumbers(arr);
    double avrg = findAvrg(arr);
    printf("Closest index to avrg is: %d", findClosestToAvr(arr,avrg));
    return 0;
}