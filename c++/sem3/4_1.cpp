//To study and implement concept of Linked list data structure.

#include<iostream>
using namespace std;

class Node
{
    int data;
    Node *next;
public:
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
    friend class LinkedList;
};

class LinkedList
{
    Node *head;
public:
    LinkedList()
    {
        head = NULL;
    }
    void insertAtEnd(int data);
    void insertAtBeginning(int data);
    void insertAfter(int data, int after);
    void deleteFromEnd();
    void deleteFromBeginning();
    void deleteAfter(int after);
    void display();
};

void LinkedList::insertAtEnd(int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList::insertAtBeginning(int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertAfter(int data, int after)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->data != after)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Element not found." << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void LinkedList::deleteFromEnd()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void LinkedList::deleteFromBeginning()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}

void LinkedList::deleteAfter(int after)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    Node *temp = head;
    while (temp->data != after)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Element not found." << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << "No element after " << after << "." << endl;
        return;
    }
    Node *temp2 = temp->next;
    temp->next = temp->next->next;
    delete temp2;
}

void LinkedList::display()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    LinkedList list;
    int choice, data, after;
    do
    {
        cout << "1. Insert at end" << endl;
        cout << "2. Insert at beginning" << endl;
        cout << "3. Insert after" << endl;
        cout << "4. Delete from end" << endl;
        cout << "5. Delete from beginning" << endl;
        cout << "6. Delete after" << endl;
        cout << "7. Display" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            list.insertAtEnd(data);
            break;
        case 2:
            cout << "Enter data: ";
            cin >> data;
            list.insertAtBeginning(data);
            break;
        case 3:
            cout << "Enter data: ";
            cin >> data;
            cout << "Enter element after which to insert: ";
            cin >> after;
            list.insertAfter(data, after);
            break;
        case 4:
            list.deleteFromEnd();
            break;
        case 5:
            list.deleteFromBeginning();
            break;
        case 6:
            cout << "Enter element after which to delete: ";
            cin >> after;
            list.deleteAfter(after);
            break;
        case 7:
            list.display();
            break;
        case 8:
            break;
        default:
            cout << "Invalid choice." << endl;
        }
        cout << endl;
    } while (choice != 8);
    return 0;
}
