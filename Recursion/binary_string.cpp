// print all binaryu string of n size without any consicutive 1's

#include<iostream>
using namespace std;

void bin_string(int n, string ans){

    if(n == 0){
        cout<<ans<<endl;
        return ;
    }

    if(ans[ans.size()-1] != '1'){
        bin_string(n-1, ans + '0');
        bin_string(n-1, ans + '1');
        
    }else{
        bin_string(n-1, ans + '0');
    }

}
int main (){

    string ans= "";
    int n;
    cout<<"enter number of binary string : ";
    cin>>n;

    bin_string(n,ans);

    return 0;
}