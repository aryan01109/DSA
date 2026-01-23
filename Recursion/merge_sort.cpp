#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>num,int st,int mid,int end){
    vector<int>temp;
    int i=st;
    int j=mid+1;
    while(st<=mid && j<= end){
        if(num[i]<=num[j]){
            temp.push_back(num[i]);
            i++;
        }else{
            temp.push_back(num[j]);
            j++;
        }
    }
    while(i <=mid){
        temp.push_back(num[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(num[j]);
        j++;
    }

    for(int id=st, x=0;id<=end;id++){
        num[id]=temp[x++];
    }

}

void merge_sort(vector<int> num ,int st,int end){
 
    if(st >= end){
        return ;
    }
    int mid=(st+(end-st))/2;

    merge_sort(num,st,mid);
    merge_sort(num,mid+1,end);

    merge(num,st,mid,end);


}

int main (){
    vector<int> num={6,3,7,5,2,4};
    int n=6;

    merge_sort(num,0,5);

    for(int i=0;i<6;i++){
        cout<<num[i]<<" ,";
    }



    return 0;
}