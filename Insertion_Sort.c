#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main(){
    int arr[] = {15,12,10,18,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting: ");
    print_array(arr,n);
    insertion_sort(arr,n);
    printf("Array after sorting: ");
    print_array(arr,n);
}