#include<iostream>
#include<stack>
#include<string>
using namespace std;


    bool isvalid(string str){
        stack<char> s;
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            if(ch=='(' || ch=='{' || ch=='['){
                s.push(ch);
            }
            else{
                if(s.empty()){
                    return false;
                }
                char top=s.top();
                s.pop();
                if((ch==')' && top!='(') || (ch=='}' && top!='{') || (ch==']' && top!='[')){
                    return false;
                }
            }
        }
        return s.empty();
    }

int main(){

    string str1="([{}])";
    string str2="([)]";


    cout<<isvalid(str1)<<endl;
    cout<<isvalid(str2)<<endl;  
    return 0;
}