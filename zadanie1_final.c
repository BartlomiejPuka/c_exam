#include <stdio.h>
#include <stdlib.h>

int i;
void wprowadz(int arr[], int size);
void find_min(int arr[], int size);
void find_max(int arr[], int size);
void find_sum(int arr[], int size);
void average(int arr[], int size);

int main(int argc, char **argv) {
    int arr[10];
    wprowadz(arr, sizeof(arr)/sizeof(int));
    find_min(arr, sizeof(arr)/sizeof(int));
    find_max(arr, sizeof(arr)/sizeof(int));
    find_sum(arr, sizeof(arr)/sizeof(int));
    average(arr,sizeof(arr)/sizeof(int));
}

void wprowadz(int arr[], int size){
    for(i=0;i<size;i++){
        printf("Wprowadz element tablicy arr[%d] =:",i);
        scanf("\n%d",arr + i);
    }
}

void find_min(int arr[],int size){
    int i;
    int min;
    int index;
    for(i=0; i < size;i++){
        if(i==0){
            min = arr[i];
            index = i;
        } else{
            if(arr[i] < min){
                min = arr[i];
                index = i;
            }
        }
    }
    printf("Minimalna wartosc: arr[%d] = %d\n",index, min);
}

void find_max(int arr[],int size){
    int i;
    int index;
    int max;
    for(i=0; i < size;i++){
        if(i==0){
            max = arr[i];
            index = i;
        } else{
            if(arr[i] > max){
                max = arr[i];
                index = i;
            }
        }
    }
    printf("Maksymalna wartosc: arr[%d] = %d\n",index, max);
}

void find_sum(int arr[], int size){
    int suma = 0;
    for(i=0; i < size; i++){
        suma+= arr[i];
    }
    printf("Suma elementow tablicy: %d\n", suma);
}


void average(int arr[], int size){
    int i;
    float sum, avg = 0.0;
    for(i = 0; i < size;i++){
        sum += arr[i];
    }
    avg = (sum/size);
     printf("Srednia elementow tablicy: %f\n", avg);
}