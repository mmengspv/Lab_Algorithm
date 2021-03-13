#include<stdio.h>

void longest_increase(int* a[]){
    
}

int main(){
    int n = 11;
    int arr[11] = {2,5,1,0,7,3,4,6,99,10,8};
    int sum = 0, max = 0, maxLength = 0, length = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int tmp = arr[i];
            sum = tmp; 
            length = 1;   
            for(int k = j; k < n; k++){
                if(tmp < arr[k]){
                    sum += arr[k];
                    length += 1;
                    tmp = arr[k];
                }
            }
            if(sum > max){
                max = sum;
                maxLength = length;
            }
        }
    }
    printf("max = %d\n", max);
    printf("maxLength = %d", maxLength);

}