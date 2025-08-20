#include <iostream>
#include <memory>

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

void Store(unique_ptr<Integer> &ptr){
    cout << "Storing Data into file " << *ptr->GetValue() << endl;
}
Integer* GetPointer(int val){
    Integer *ptr = new Integer{val};
    return ptr;
}

void Operate(int val){
    // Integer* ptr = GetPointer(val);
    unique_ptr<Integer> ptr{GetPointer(val)};
    if(ptr == nullptr){
        ptr.reset(new Integer{val});
    }
    ptr->SetValue(val);
    Display(ptr.get());
    
    // delete ptr;
    ptr = nullptr;

    ptr.reset(new Integer{});
    if(ptr){
        ptr->SetValue(__LINE__);
        Display(ptr.get());
    }

    // delete ptr;
    //ptr = nullptr;
    // Store(move(ptr));
    Store(ptr);

}

int main(){

    Operate(10);

    return 0;
}