//Quick Sort
#include <stdio.h>
#include <stdlib.h>

int partition(int arr[],int low,int high){
    int l=low,r=high;
    int pivot=arr[low];
    while(l<r){
        while (pivot>=arr[l] && l<=high){
            l++;
        }
        while(pivot<arr[r] &&r>0){
            r--;
        }
        if(l<r){
            int temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
        }
    }   

    int temp=arr[low];
    arr[low]=arr[r];
    arr[r]=temp;
    return r;
}

void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pivot = partition(arr,low,high);
        quick_sort(arr,low,pivot-1);
        quick_sort(arr,pivot+1,high);
    }
}

void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main(){
    int arr[] = {15,12,5,45,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting: ");
    print_array(arr,n);
    quick_sort(arr,0,n-1);
    printf("Array after sorting: ");
    print_array(arr,n);
}