#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> v={1,2,2,3,4,5};

    // for(int i=0;i<v.size();i++){
    //     for(int j=i+1;j<v.size();j++){
    //         if(v[i]==v[j]){
    //             cout<<"Repetition number is: "<<v[i]<<endl;
    //             return 0;
    //         }
    //     }

    // }

    int n=v.size();
    vector<bool> visited(n, false);

    for(int i=0;i<n;i++){
        if(visited[v[i]]){
            cout<<"Repetition number is: "<<v[i]<<endl;
            return 0;
        }
        visited[v[i]]=true;
    }
    cout<<"No repetition number found"<<endl;
    return 0;
}