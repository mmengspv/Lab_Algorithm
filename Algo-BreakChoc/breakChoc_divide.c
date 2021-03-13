#include<stdio.h>

int breakChoc(int n, int m){
    if(n == 1 && m == 1){
        return 0;
    }
    if(n > 1){
        return breakChoc(n-1, m) + breakChoc(1, m)+ 1;
    }else if(n == 1 && m > 1){
        return breakChoc(n, m-1) + 1;
    }
}
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", breakChoc(n, m));
}