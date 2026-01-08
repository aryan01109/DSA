#include<iostream>
#include<cstring>
using namespace std;

void upper_case(char c[],int n){

    for(int i=0;i<n;i++){
        char ch=c [i];
        if(ch>='A' && ch<='Z'){
            continue;
        }else{
            c[i]=ch-'a'+'A';
        }
    cout<<c[i];
}
cout<<endl;

}

void lower_case(char c[],int n){
    for (int i=0;i<n;i++){
        char word=c[i];
        if(word<='a' && word>='z'){
            continue;
        }else{
            c[i]=word-'A'+'a';
        }
        cout<<c[i];
    }
    cout<<endl;
}

void revers_case(char ch[],int n){
    int st=0;
    int end=n-1;
     while (st < end) {
        swap(ch[st], ch[end]);
        st++;
        end--;
    }
    cout<<ch<<endl;
}

void palindrome(char ch[],int n){
 int st=0;
 int end=n-1;
 bool falg=true;
 while(st<end){
    if(ch[st] != ch[end]){
        falg=false;
    }else{
        falg=true;
    }
 }  
 cout<<falg;
}

int main (){
    char name[]="aryan";
    char na[]="ARYAN";



    upper_case(name, strlen(name));
    lower_case(na,strlen(na));
    revers_case(name, strlen(name));
    palindrome(name,strlen(name));

    return 0;
}