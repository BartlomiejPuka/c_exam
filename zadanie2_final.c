#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


void fill_arr(int*arr_x, int*arr_y);
void fill_arr_inv(int*arr_x, int*arr_y);
void move_arr(int*arr_x, int*arr_y);
void trim_arr(int*arr_x, int*arr_y);
void print_arr(int*arr_x, int*arr_y);
void fun(int*arr_x, int*arr_y);
int i;

int main() {

    int arr_x[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int arr_y[SIZE];
    fun(arr_x, arr_y);
    return 0;
}

void fun(int*arr_x, int*arr_y){
    char wybor;
    do {
        system("cls");        
        printf("\na) fill_arr\nb) fill_arr_inv\nc) trim_arr\nd) move_arr\ne) print_arr\n");
        printf("WYBIERZ OPCJE:");
        scanf(" %c",&wybor);
        switch(wybor){
            case 'a':
                fill_arr(arr_x,arr_y);
                break;
            case 'b':
                fill_arr_inv(arr_x,arr_y);
                break;
            case 'c':
                trim_arr(arr_x,arr_y);
                break;
            case 'd':
                move_arr(arr_x,arr_y);
                break;
            case 'e':
                print_arr(arr_x,arr_y);
                break;
            case 'q':
                EXIT_SUCCESS;}
        system("pause");
    } while(wybor!='q');
}
void fill_arr(int*arr_x, int*arr_y){
    int i;
    for(i=0;i<SIZE;i++){
        arr_y[i] = arr_x[i];
//        printf("second_arr[%d] = %d\n",i,arr_y[i]);
    }
}

void fill_arr_inv(int*arr_x, int*arr_y){
    int i;
    int j = 0;
    for(i=SIZE-1;i>=0;i--){
        arr_y[i] = arr_x[j];
        j++;

    }

}

void move_arr(int*arr_x, int*arr_y){
    int i, temp, j;
    int n;
    int decyzja = 0;
    printf("\nW prawo czy lewo? [1/0]:");
    scanf("\n%d",&decyzja);
    printf("\nPodaj liczbe przesuniec N:");
    scanf("\n%d",&n);
    if(decyzja == 0){
    for(j=0;j<n;j++){
        temp = arr_x[0];
        for(i = 0; i < 10; i++){
            if(i != 9){
            arr_x[i] = arr_x[i+1];
            } else {
                    arr_x[i] = temp;
            }
        }
    }} else if(decyzja==1){
       for(j=0;j<n;j++){
        temp = arr_x[9];
        for(i = 9; i >= 0; i--){
            if(i != 0){
            arr_x[i] = arr_x[i-1];
            } else {
                    arr_x[i] = temp;
            }
        }
    }}
}

void print_arr(int*arr_x, int*arr_y){
    int i;
    printf("Pierwsza tablica:\n");
    for(i=0;i<SIZE;i++){
        printf("first_arr[%d] = %d\n", i, arr_x[i]);
    }
    printf("Druga tablica:\n");
    for(i=0;i<SIZE;i++){
        printf("second_arr[%d] = %d\n", i, arr_y[i]);
    }
}

void trim_arr(int*arr_x, int*arr_y){
    int i, temp, j;
    int n;
    int decyzja = 0;
    printf("\nW prawo czy lewo? [1/0]:");
    scanf("\n%d",&decyzja);
    printf("\nPodaj liczbe przesuniec N:");
    scanf("\n%d",&n);
    if(decyzja == 0){
    for(j=0;j<n;j++){
        temp = arr_x[0];
        for(i = 0; i < 10; i++){
            if(i != 9){
            arr_x[i] = arr_x[i+1];
            } else {
                arr_x[i] = 0;
            }
        }
    }} else if(decyzja==1){
       for(j=0;j<n;j++){
        temp = arr_x[9];
        for(i = 9; i >= 0; i--){
            if(i != 0){
            arr_x[i] = arr_x[i-1];
            } else {
                    arr_x[i] = 0;
            }
        }
    }}
}