#include <iostream>
using namespace std;

class Printer{
    public:
        int *data1;
        int *data2;
    
    public:
        Printer(){
            cout << "Default Constructor called" << endl;
        }

        Printer(int val1, int val2){
            data1 = new int(val1);
            data2 = new int(val2);
        }

        void Display(){
            cout << "data1: " << *data1 << "   data2: " << *data2 << endl; 
        }

        Printer(Printer &other){
            data1 = new int(*other.data1);
            data2 = new int(*other.data2);
        }

        Printer(Printer &&other){
            data1 = other.data1;
            data2 = other.data2;
            other.data1 = nullptr;
            other.data2 = nullptr;
        }

};

int main(){

    Printer *ptr = new Printer{10,20};
    ptr->Display();

    Printer obj1(40,50);
    obj1.Display();

    Printer obj2 = obj1;
    obj2.Display();

    // obj2.data1 = new int(100);
    *obj2.data1 = 100;
    Printer obj3 = move(obj2);
    obj1.Display();
    //obj2.Display();
    obj3.Display();

    return 0;
}