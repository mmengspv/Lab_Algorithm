#include<iostream>

using namespace std;

int main(){
    int n, index;
    string arr[n];
    string tmp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        index = i;
        while(i > 0 && index >= 0){
            if(arr[index].length() < arr[index-1].length()){
                tmp = arr[index];
                arr[index] = arr[index-1];
                arr[index-1] = tmp;
                index -= 1;
                continue;
            }break;
        }
    }
    // cout << "Output" << endl;
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << endl;
    // }
    int finish = 0, count = 0;
    for(int i = 0; i < n-1; i++){
        //pattern
        // cout << "Index " << i << endl;
        for(int j = 0; j < arr[i+1].length(); j++){
            finish = 0;
            for(int k = 0; k < arr[i].length(); k++){
                //text
                if(arr[i+1][j+k] == arr[i][k]){
                    finish += 1;
                    continue;
                }
                break;
            }
            if(finish == arr[i].length()){
                count += 1;
                break;
            }
        }
    }


    // cout << count << endl;
    if(count != n-1){
        cout << "NO";
    }else{
        cout << "YES" << endl;
        for(int i = 0; i < n; i++){
            cout << arr[i] << endl;
        }
    }

}