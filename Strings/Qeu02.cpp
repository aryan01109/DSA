#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str1="aryan";
     int n = str1.length();

    string str2 = "";        
    str2.resize(n);          

    for (int i = 0; i < n; i++) {
        str2[i] = str1[n - 1 - i];
    }

    cout << str2 << endl;
    return 0;
}