#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;

mutex count_mutex;
void taskOne(const int id, const string &message){
    for(int i = 0; i < 5; i++){
        count_mutex.lock();
        std::cout << message << " from id " << id << std::endl;
        count_mutex.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void taskTwo(const int id, const string &message){
    for(int i = 0; i < 5; i++){
        count_mutex.lock();
        std::cout << message << " from id " << id << std::endl;
        count_mutex.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
int main(){
    thread thread1(taskOne, 01, "Hello ");
    thread thread2(taskTwo, 02, "Bye Bye");

    thread1.join();
    thread2.join();


    return 0;
}