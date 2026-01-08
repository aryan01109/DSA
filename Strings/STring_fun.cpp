#include<iostream>
#include<cstring>
using namespace std;

//valid anagram
void anagram(string str1,string str2){
     int fre[50]={0};

     if(str1.length()!=str2.length()){
        cout<<"Not anagram"<<endl;
        return;
     }

        for(int i=0;i<str1.length();i++){
            int in=str1[i]-'a';
            fre[in]++;
            
        }

        for(int i=0;i<str2.length();i++){
            int in=str2[i]-'a';
            if (fre[in]==0){
                cout<<"not valid anagram !!"<<endl;
                return;
            }
            fre[in]--;
        }
        cout<<"valid anagram !!";
}

int main(){
    string str1 = "hello";
    string str2 = "lloeh";

    anagram(str1, str2);

for(int i=0;i<str1.length();i++){
    cout<<str1[i];
}
cout<<endl;
for(char ch: str1){
    cout<<ch;
}
    return 0;
}