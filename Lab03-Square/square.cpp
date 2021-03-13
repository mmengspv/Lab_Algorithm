#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n, inn, find, tmp, c, check;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> inn;
        find = 0;
        for(int j = 0; j < sqrt(inn); j++){
            for(int k = 0; k < sqrt(inn); k++){
                tmp = j*j + k*k;
                check = inn - tmp;
                c = sqrt(check);
                if(check == c*c){
                    cout << j << " " << k << " " << c << endl;
                    find = 1;
                    break;
                }
            }
            if(find == 1){
                break;
            }
        }
        if(find == 0){
            cout << -1 << endl;
        }
    }

}