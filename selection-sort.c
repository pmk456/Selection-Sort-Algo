#include <stdio.h>
void selection_Sort(int arr[], int size){
    int min, i, j, temp;
    for(i=0;i<size;i++){
        min = i;
        for(j=i+1;j<size;j++){
            if(arr[min] > arr[j]) min = j;
        }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
    }
}
void print_array(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d\t", arr[i]);
    }
}
int main(){
    int array[10] = {12, 10, 9, 8, 6, 5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Array Before Sorting:");
    print_array(array, size);
    selection_Sort(array, size);
    printf("\nArray After Sorting:");
    print_array(array, size);
}
