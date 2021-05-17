#include <iostream>
#include <thread>

void thread()
{
    std::cout << "Hello from thread\n";
}

int main()
{
    std::thread my_thread(thread);
    my_thread.join();
}