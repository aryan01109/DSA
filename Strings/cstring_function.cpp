#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char name1[100];
    char name2[100]="bhoya";

    cout<<strcpy(name1,"aryan")<<endl;
    cout<<strcat(name1,name2)<<endl;
    cout<<strcmp(name1,name2)<<endl;
    cout<<strlen(name1)<<endl;

    return 0;

}