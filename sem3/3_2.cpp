//At the call center, calls are placed in queue till they are 
//answered by customer service agent. Implement the ADT of circular 
//queue for the above application. 

#include <iostream>
using namespace std;
#define MAX 5

class CallCenterQueue
{
    int front, rear;
    int arr[MAX];
public:
    CallCenterQueue()
    {
        front = rear = -1;
    }
    void enqueue(int callID);
    int dequeue();
    void display();
    bool isEmpty();
    bool isFull();
};

void CallCenterQueue::enqueue(int callID)
{
    if (isFull())
    {
        cout << "Queue is full. Call cannot be placed in the queue." << endl;
        return;
    }

    if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }
    arr[rear] = callID;
}

int CallCenterQueue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty. No calls to answer." << endl;
        return -1;
    }

    int callID = arr[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }

    return callID;
}

void CallCenterQueue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Call Queue:" << endl;
    int i = front;
    do
    {
        cout << "Call ID: " << arr[i] << endl;
        i = (i + 1) % MAX;
    } while (i != (rear + 1) % MAX);
}

bool CallCenterQueue::isEmpty()
{
    return front == -1;
}

bool CallCenterQueue::isFull()
{
    return (rear + 1) % MAX == front;
}

int main()
{
    CallCenterQueue callQueue;
    int choice, callID;

    while (1)
    {
        cout << "1. Enqueue Call\n";
        cout << "2. Dequeue Call\n";
        cout << "3. Display Calls\n";
        cout << "4. Quit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Call ID: ";
            cin >> callID;
            callQueue.enqueue(callID);
            break;
        case 2:
            callID = callQueue.dequeue();
            if (callID != -1)
                cout << "Answered Call ID: " << callID << endl;
            break;
        case 3:
            callQueue.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Wrong choice\n";
        }
    }

    return 0;
}
