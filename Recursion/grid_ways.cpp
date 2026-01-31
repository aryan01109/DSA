#include<iostream>
#include<String>
#include<vector>
using namespace std;

int grid_ways(int r, int c, int n,int m){


    if(r==n-1 || c==m-1){
        return 1;
    }

    if(r>=n || c>=m){
        return 1;

    }

    //right
    int val1=grid_ways(r,c+1,n,m);

    //down
    int val2=grid_ways(r+1,c,n,m);

    return (val1+val2);
}

int main(){


    cout<<grid_ways(0,0,3,3);
    return 0;
}