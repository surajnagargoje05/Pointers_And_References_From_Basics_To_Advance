#include <iostream>
using namespace std;

class Printer{
    private:
        int *m_Value;
    
    public:
        void setValue(int *ptrValue){
            m_Value = ptrValue;
        }

        void Print(){
            cout << "Value is : " << *m_Value << endl;
        }

};

int main(){

    Printer *ptr = new Printer{};
    int val;
    cout << "Enter Value : ";
    cin >> val;

    int *ptrVal = new int(val);

    ptr->setValue(ptrVal);
    ptr->Print(); 
    



    return 0;
}