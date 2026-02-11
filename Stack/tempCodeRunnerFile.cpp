
#include<iterator>  
#include<vector>
using namespace std;

void stockSpan(vector<int> stock, vector<int>& span){

    stack<int> s;
    s.push(0);
    span[0]=1;

    for(int i=1;i<stock.size();i++){
        int currentPrice=stock[i];
        while(!s.empty()&&currentPrice>stock[s.top()]){
            s.pop();
        }
        if(s.empty()){
            span[i]=i+1;
        }
        else{
            int prevHight=s.top();
            span[i]=i-prevHight;
        }
    }
    for(int i=0;i<span.size();i++){
        cout<<span[i]<<" ";
    }
}


int main(){
    vector<int> stock={100, 80, 60, 70, 60, 75, 85};
    vector<int> span={0,0,0,0,0,0,0};
    stack<int> s;
