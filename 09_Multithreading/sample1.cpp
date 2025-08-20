#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void taskOne(const int id, const string &message){
    for(int i = 0; i < 5; i++){
        std::cout << message << " from id " << id << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void taskTwo(const int id, const string &message){
    for(int i = 0; i < 5; i++){
        std::cout << message << " from id " << id << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(700));
    }
}
int main(){
    thread thread1(taskOne, 01, "Hello ");
    thread thread2(taskTwo, 02, "Bye Bye");

    thread1.join();
    thread2.join();


    return 0;
}