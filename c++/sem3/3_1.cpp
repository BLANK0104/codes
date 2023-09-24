//Write a Program to implement Circular Queue

#include<iostream>
using namespace std;
#define MAX 5

class Queue
{
    int front, rear;
    int arr[MAX];
public:
    Queue()
    {
        front = rear = -1;
    }
    void insert(int);
    int del();
    void display();
};

void Queue::insert(int item)
{
    if((front == 0 && rear == MAX-1) || (front == rear+1))
    {
        cout<<"Queue Overflow\n";
        return;
    }
    if(front == -1)
    {
        front = rear = 0;
    }
    else
    {
        if(rear == MAX-1)
            rear = 0;
        else
            rear = rear+1;
    }
    arr[rear] = item;
}

int Queue::del()
{
    int item;
    if(front == -1)
    {
        cout<<"Queue Underflow\n";
        return -1;
    }
    item = arr[front];
    if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        if(front == MAX-1)
            front = 0;
        else
            front = front+1;
    }
    return item;
}

void Queue::display()
{
    int i;
    if(front == -1)
    {
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Queue elements :\n";
    i = front;
    if(front <= rear)
    {
        while(i <= rear)
            cout<<arr[i++]<<" ";
    }
    else
    {
        while(i <= MAX-1)
            cout<<arr[i++]<<" ";
        i = 0;
        while(i <= rear)
            cout<<arr[i++]<<" ";
    }
    cout<<endl;
}

int main()
{
    Queue q;
    int choice, item;
    while(1)
    {
        cout<<"1.Insert\n";
        cout<<"2.Delete\n";
        cout<<"3.Display\n";
        cout<<"4.Quit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Input the element for insertion in queue : ";
            cin>>item;
            q.insert(item);
            break;
        case 2:
            item = q.del();
            if(item != -1)
                cout<<"Deleted element is : "<<item<<endl;
            break;
        case 3:
            q.display();
            break;
        case 4:
            exit(1);
        default:
            cout<<"Wrong choice\n";
        }
    }
    return 0;
}
