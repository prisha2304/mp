#include<stdio.h>

int main(){
    int num;
    scanf("%d" , &num);
    int arr[num];
    for(int i = 0; i<num; j++){
        scanf("%d" , &arr[i]);
    }
    int k;
    scanf("%d" , &k);
    for(int j = num-k; j<num; j++){
        printf("%d\n" , arr[j]);
    }
    for(int i = 0; i<num-k; i++){
        printf("%d\n" , arr[i]);
    }
}