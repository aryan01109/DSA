#include<iostream>
#include<string>
using namespace std;

class user{
    private:
            int id;
            string password;

    public:
            string username;
            
            user(int id){
                this->id=id;
            }

        //getter
        string getpassword(){
            return password;
        }

        //setter
        void setpassword(string password){
            this->password=password;

        }


};

int main(){
    user u1(101);
    u1.username="ab";
    u1.setpassword("ab@p");

    cout<<"user name is : "<<u1.username<<endl;
    cout<<"user password is : "<<u1.getpassword()<<endl;
    

    return 0;
}