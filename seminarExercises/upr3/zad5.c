#include <stdio.h>
void sort(int* arr, int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size-i + 1; j++){
            if(arr[i] > arr[j + 1]){
                temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}
int main(){
    int arr[] = {5,-5,3,2,1,4,-1,-2,-4,-3};
    int size = sizeof(arr)/sizeof(int);
    sort(arr, size);
    printf("Enter which element you want: ");
    int input;
    scanf("%d",&input);
    if(size - input < 0){
        printf("Out of bounds\n");
    }else{
        printf("%d\n", arr[size-input]);
    }
    return 0;
}