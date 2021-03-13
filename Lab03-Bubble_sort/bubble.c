#include<stdio.h>

int main(){
    int n;
    int arr[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int tmp;
    for(int k = 0; k < n; k++){
        if(k < n-1){
            printf("%d, ",arr[k]);
        }else{
            printf("%d\n",arr[k]);
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                for(int k = 0; k < n; k++){
                    if(k < n-1){
                        printf("%d, ",arr[k]);
                    }else{
                        printf("%d\n",arr[k]);
                    }
                }
            }
        }
    }
}