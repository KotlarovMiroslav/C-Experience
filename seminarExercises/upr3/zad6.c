#include <stdio.h>

int main(){
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int streakStartIsSet = 0;
    int isIncreasing = 0;
    int counter =1;
    int maxCounter = 0;
    int resultMaxIndex = 0;
    int maxIndex = -1;
    for(int i = 0; i < size - 1; i++){
        if(isIncreasing == 0){
            if(arr[i] < arr[i+1]){
                counter++;
                if(streakStartIsSet == 0){
                    maxIndex = i; 
                    streakStartIsSet = 1;
                }
            }else{
                if(maxCounter < counter){
                    maxCounter = counter;
                }
                isIncreasing = 1;
                streakStartIsSet = 0;
                counter = 1;
            }
        }else{
            if(arr[i] > arr[i+1]){
                counter++;
                if(streakStartIsSet == 0){
                    maxIndex = i; 
                    streakStartIsSet = 1;
                }
            }else{
                if(maxCounter < counter){
                    maxCounter = counter;
                }
                isIncreasing = 1;
                streakStartIsSet = 0;
                counter = 1;
            }
        }
        if(resultMaxIndex < maxIndex){
            resultMaxIndex = maxIndex;
        }
    }

    
    //printf("Longest streak is: %d starting at %d position\n",maxCounter,resultMaxIndex+1);
    return 0;
}