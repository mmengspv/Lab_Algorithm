#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n], check[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        check[i] = 0;
    }

    int tmp;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    int count = n;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] < arr[j] && check[j] == 0){
                arr[i] = -1;
                check[j] = -1;
                count -= 1;
                break;
            }
        }
    }
    cout << count;
}