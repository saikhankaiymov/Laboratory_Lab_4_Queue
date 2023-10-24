#include <iostream>
#include<Windows.h>
using namespace std;


struct Queue {
    int size;
};

void DeQueue(Queue&);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");

    cout << "Hello World" << endl;
    
    return 0;
}

void DeQueue(Queue& queue) {
    if (queue.size != 0) {
        // логика на удаление элемента из очереди

    }
    else
        cout << "Очередь пуст" << endl;
}