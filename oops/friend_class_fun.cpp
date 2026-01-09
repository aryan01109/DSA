#include<iostream>
using namespace std;

// FRIEND CLASS 
  class Box{
        private:
            double width;

        public:
            Box(){
                width=10;
            }
            friend void printWidth(Box box);
    };
    void printWidth(Box box){
        cout<<"Width of box is : "<<box.width<<endl;
    }

int main(){

    Box box;
    printWidth(box);

    return 0;
}