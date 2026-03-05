#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if(rear == MAX - 1)
    {
        cout << "Queue Overflow\n";
    }
    else
    {
        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << value << " inserted into queue\n";
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue Underflow\n";
    }
    else
    {
        cout << queue[front] << " deleted from queue\n";
        front++;
    }
}

void display()
{
    if(front == -1)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        for(int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}
