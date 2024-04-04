//vurtene na masiv
#include <stdio.h>
#include <string.h>
void copyArray(int* arr , int* arr1, int size){
    for(int i = 0; i < size; i++){
        arr[i] = *(arr1+i);
    }
}

int main(){
    int arrSize;
    int shiftAmount;
    printf("Enter arrSize: ");
    scanf("%d", &arrSize);
    int arr[arrSize];
    for(int i = 0; i < arrSize; i++){
        scanf("%d", &arr[i]);
        
    }
    getchar();
    printf("Enter shiftAmount: ");
    scanf("%d", &shiftAmount);
    getchar();
    int navArr[arrSize];
    copyArray(navArr, arr, arrSize);
    int shiftReducer = arrSize;
    int timesOutOfArr = 1;
    for(int i = 0; i < arrSize; i++){
        if(i + 1  + shiftAmount - (shiftReducer * timesOutOfArr) > 0){
            while(i + 1 + shiftAmount - (shiftReducer * timesOutOfArr)> sizeof(arr) / sizeof(int)){
                timesOutOfArr += 1;
            }
            arr[i + shiftAmount - (shiftReducer * timesOutOfArr)] = navArr[i];
        }else{
            arr[i + shiftAmount] = navArr[i];
        }
        
       
        
    }
    printf("Shift: %d\n",shiftAmount);
    for(int i = 0; i < 5; i++){
            printf("%d " , arr[i]);
        }
    printf("\n");
     for(int i = 0; i < 5; i++){
            printf("%d " , navArr[i]);
        }
    

    return 0;
}