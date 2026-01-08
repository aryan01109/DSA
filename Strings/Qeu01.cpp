#include<iostream>
#include<cstring>
using namespace std;

// count the string lower character and upper chaacters
void count_characters(string str){
    int low=0;
    int upp=0;

    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            low++;
        }
         if(str[i]>='A' && str[i]<='Z'){
            upp++;
        }
    }
    cout<<low<<endl<<upp<<endl;

}

void count_vowels_consonants(string str){
    int vowels=0;
    int consonants=0;

    for(int i=0;i<str.length();i++){
        char ch=tolower(str[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowels++;
        }
        else if(ch>='a' && ch<='z'){
            consonants++;
        }
    }

    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
}
int main (){
    string str="Hello World";
    count_characters(str);
    count_vowels_consonants(str);
    return 0;
}