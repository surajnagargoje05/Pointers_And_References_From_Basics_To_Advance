#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void taskOne(){
    for(int i = 0; i < 5; i++){
        std::cout << "Task One: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void taskTwo(){
    for(int i = 0; i < 5; i++){
        std::cout << "Task Two: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(700));
    }
}
int main(){
    thread thread1(taskOne);
    thread thread2(taskTwo);

    thread1.join();
    thread2.join();


    return 0;
}