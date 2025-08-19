#include <iostream>
using namespace std;

class Integer{
    public:
        int *value;

    public:
        Integer() = default;
        
        Integer(int val){
            value = new int(val);
        }

        ~Integer(){
            delete value;
        }

        void SetValue(const int val){
            value = new int(val);
        }

        const int *GetValue() const{
            return value;
        }
};

void Display(Integer *ptr){
    if(!ptr){
        return;
    }
    cout << *ptr->GetValue() << endl;

}
Integer* GetPointer(int val){
    Integer *ptr = new Integer{val};
    return ptr;
}

void Operate(int val){
    Integer* ptr = GetPointer(val);
    if(ptr == nullptr){
        ptr = new Integer{val};
    }
    ptr->SetValue(val);
    Display(ptr);
    
    delete ptr;
    ptr = nullptr;

    ptr = new Integer{};
    if(ptr){
        ptr->SetValue(__LINE__);
        Display(ptr);
    }

    delete ptr;
    ptr = nullptr;

}

int main(){

    Operate(10);

    return 0;
}