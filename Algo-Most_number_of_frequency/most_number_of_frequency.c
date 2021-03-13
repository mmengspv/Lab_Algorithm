#include<stdio.h>

int main(){
    
    int a[8] = {2,2,3,3,4,4,4,4};

    int num_max = a[0], last_num = a[0];
    int freq_max = 1, freq = 1;
    for(int i = 1; i < 8; i++){
        if(last_num != a[i]){
            last_num = a[i];
            freq = 1;
            break;
        }
        freq += 1;
        if(freq > freq_max){
            num_max = last_num;
            freq_max = freq;
        }
    }

    printf("%d\n", num_max);
    printf("%d", freq_max);
}