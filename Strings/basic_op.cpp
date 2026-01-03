#include<iostream>
using namespace std;

void Operation(char c){
    if(c>='A' && c<='Z'){
        cout << "Uppercase Letter" << endl;
    }
    else if(c>='a' && c<='z'){
        cout << "Lowercase Letter" << endl;
    }
    else if(c>='0' && c<='9'){
        cout << "Digit" << endl;
    }
    else{
        cout << "Special Character" << endl;
    }
}

void chr_index(char c){
    int pos;
    pos=int(c)-int('a');
    cout<<"character index is :"<<pos+1<<endl;
}

void char_arr(){
    char arr[]={'a','r','y','a','n'};
    cout<<"Character array is :"<<arr<<endl;
}

void string_arr(){
    char str[]="aryan";// this condition null char stored the memory after the last character
    cout<<"String array is :"<<str<<endl;
}
int main(){
    char ch='A';
    cout << "Character: " << ch << "that index is " << int(ch) << endl;

    char c='z';
    Operation(c);
    chr_index('c');
    char_arr();
    string_arr();

    return 0;
}