#include<stdio.h>


int main(){
    int n = 6;
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int tmp;
    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0){
            if(arr[j] < arr[j-1]){
                tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
                j--;
            }else{
                break;
            }
        }
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
