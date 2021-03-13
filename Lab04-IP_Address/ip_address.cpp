#include<iostream>
#include<string>
using namespace std;

bool checkCorrect(string ss){
    int tmpInt = stoi(ss);
    if(tmpInt < 0 || tmpInt > 255 ){
        return false;
    }else if(tmpInt == 0 && ss.length() > 1){
        return false;
    }else if(ss.substr(0,1) == "0" && ss.length() > 1){
        return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    string ip;
    for(int x = 0; x < n; x++){
        cin >> ip;
        int count = 0;
        int ipLength = ip.length();
        if(ipLength <= 12 && ipLength >= 4){
            for(int i = 1; i < (ipLength-2); i++){
                int tmpJ = 1;
                for(int j = i+1; j < (ipLength-1); j++){
                    int tmpK = 1;
                    for(int k = j+1; k < ipLength; k++){
                        // cout << "i = " << i << " j = " << j << " k = " << k << endl;
                        // cout << ip.substr(0,i) << " " << ip.substr(i,tmpJ) << " " << ip.substr(j,tmpK) << " " << ip.substr(k) << endl;
                        if(checkCorrect(ip.substr(0,i)) && checkCorrect(ip.substr(i,tmpJ)) && checkCorrect(ip.substr(j,tmpK)) && checkCorrect(ip.substr(k))){
                            count += 1;
                            // cout << "count += 1" << endl;
                        }
                        tmpK += 1;
                    }
                    tmpJ += 1;
                }
            }
        }
        cout << count << endl;
    }

}