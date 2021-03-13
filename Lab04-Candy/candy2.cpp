#include<iostream>
using namespace std;

int main(){
    int times;
    cin >> times;
    // times = 1;
    for(int i = 0; i < times; i++){
        int arr[3]; 
        cin >> arr[0] >> arr[1] >> arr[2];
        // arr[0] = 7, arr[1] = 4, arr[2] = 10;
        int count = 0;
        int tmp;
        while(1){
            for(int j = 1; j < 3; j++){
                for(int k = 0; k < 3-j; k++){
                    if(arr[k] > arr[k+1]){
                        tmp = arr[k+1];
                        arr[k+1] = arr[k];
                        arr[k] = tmp;
                    }
                }
            }

            // for(int x = 0; x < 3; x++){
            //     cout << arr[x] << " ";
            // }
            // cout << endl;
            if(arr[0] == 0 && arr[1] == 0){
                break;
            }
            arr[2] -= 1;
            arr[1] -= 1;
            count += 1;
            
        }
        cout << count << endl;
    }
}