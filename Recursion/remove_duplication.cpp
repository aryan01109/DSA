#include<iostream>
#include<string>
using namespace std;    

void removeDuplication(string str, string result ,int map[],int index){
    if(index==str.length()){
        cout<<"result is : "<<result<<endl;
        return;
    }   

    char ch=str[index];
    int mapindex=(int)(ch -'a');
    if(map[mapindex]==true){
        removeDuplication(str,result,map,index+1);

    }else{
        map[mapindex]=true;
        removeDuplication(str,result+str[index],map,index+1);
    }

}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    string result;
    int map[256] = {0};

    removeDuplication(str,result,map,0);
    return 0;
}









