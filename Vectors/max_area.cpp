#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> height={1,8,6,2,5,4,8,3,7};
    int maxArea=0;
    int left=0;
    int right=height.size()-1;
    
    while(left<right){
        int width=right-left;
        int ht=min(height[left],height[right]);
        int area=width*ht;
        maxArea=max(maxArea,area);

        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }
    cout<<"Maximum Area is: "<<maxArea<<endl;

    return 0;
}
