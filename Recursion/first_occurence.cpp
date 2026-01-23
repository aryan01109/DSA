#include<iostream>
#include<vector>    
using namespace std;

int firstoccurence(vector<int> &arr,int key,int i){
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstoccurence(arr,key,i+1);


}

int lastocurence(vector<int> &arr,int key,int i){

    if(i==arr.size()){
        return -1;
    }   
    int index_found=lastocurence(arr,key,i+1);
    if(index_found == -1){
        if(arr[i]==key){
            return i;
        }
        
    }
    return index_found;

}

int main(){

    vector<int> arr={1,2,3,4,5,3,2,1};
    int n=arr.size();
    int key=3;

    cout<<"first occurrence of key is: "<<firstoccurence(arr,key,0)<<endl;
    cout<<"last occurrence of key is: "<<lastocurence(arr,key,0)<<endl;


    return 0;
}