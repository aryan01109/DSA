#include <iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> va= {2, 7, 11, 15};
    int target=9;
    vector<int> result;

    // for(int i=0;i<va.size();i++){
    //     for(int j=i+1;j<va.size();j++){
    //         if(target==va[i]+va[j]){
    //             result.push_back(i);
    //             result.push_back(j);
    //             cout<<"Indices are: ("<<result[0]<<","<<result[1]<<")"<<endl;
    //         }
    //     }
    // }
    int left=0;
    int right=va.size()-1;
    if(target==va[left]+va[right]){
        result.push_back(left);
        result.push_back(right);
        cout<<"Indices are: ("<<result[0]<<","<<result[1]<<")"<<endl;
    }else if(target>va[left]+va[right]){
        left++;
    }
    else{
        right--;
    }

    return 0;

}