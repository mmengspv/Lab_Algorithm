#include<iostream>

using namespace std;

bool equivalent(string a, string b){
    // cout << a << " " << b << endl;
    if(a.length() == 1 || b.length() == 1){
        if(a == b){
            return true;
        }
        return false;
    }
    int mid = a.length()/2; 
    // cout << mid << endl;
    // cout << "a = " << a.substr(0,mid) << " " << a.substr(mid,mid) << endl;
    // cout << "b = " << b.substr(0,mid) << " " << b.substr(mid,mid) << endl;
    bool c1 = (equivalent(a.substr(0,mid), b.substr(0,mid)) && equivalent(a.substr(mid), b.substr(mid)));
    // bool c2 = equivalent(a.substr(mid), b.substr(mid));
    bool c3 = (equivalent(a.substr(0,mid), b.substr(mid)) && equivalent(a.substr(mid), b.substr(0,mid)));
    // bool c4 = equivalent(a.substr(mid), b.substr(0,mid));
    return (c1) || (c3);
}


int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;;
    if(equivalent(s1, s2)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}