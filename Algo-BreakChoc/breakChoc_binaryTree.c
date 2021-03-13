#include<stdio.h>
#include<math.h>

int breakChoc(int i, int n, int j, int m){
    if(n == i && m == j){
        return 0;
    }
    if(i != n){
        int middleR = ceil((n-i+1)/2);
        return (breakChoc(i, middleR, j, m) + breakChoc(middleR+1, n, j, m)+ 1);
    }else{
        int middleC = ceil((m-j+1)/2);
        return (breakChoc(i, n, j, middleC) + breakChoc(i, n, middleC+1, m) + 1);
    }
}

int main(){
    printf("%d", breakChoc(1,4,1,4));
}