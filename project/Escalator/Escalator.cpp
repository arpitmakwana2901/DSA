#include <iostream>
using namespace std;

class StackBase
{
public:
    virtual void push(int element) = 0;
    virtual int pop() = 0;
    virtual int peek() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class Stack : public StackBase
{ // stack class inherite stackBase class method

private:
    int top;     
    int n;       
    int arr[100]; 

public:
    Stack(int size)
    { 
        n = size;
        top = -1;
    }

    void push(int element) override
    { // override use polymorphism
        if (isFull())
        {
            cout << "Stack Overflow\n";
            return;
        }
        top++;              
        arr[top] = element; 
        cout << "Element pushed successfully\n";
    }

    int pop() override
    {
        if (isEmpty())
        { 
            cout << "Stack Underflow\n";
            return -1;
        }
        int res = arr[top]; 
        top--;              
        return res;
    }

    int peek() override
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n"; 
            return -1;
        }
        return arr[top]; 
    }

    bool isEmpty() override
    {
        return (top == -1); // if top == -1 return true means our stack is empty
    }

    bool isFull() override
    {
        return (top == n - 1); // if top == n - 1  return true means our stack is full 
    }
};

int main()
{
    int size; 
    cout << "Enter stack size: ";   
    cin >> size;  

    Stack s1(size);  // intialize stack size

    int choice, element;

    do
    {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top Element\n";
        cout << "4. Check Empty\n";
        cout << "5. Check Full\n";
        cout << "0. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element: ";
            cin >> element;
            s1.push(element); // calling push method
            break;

        case 2:
            cout << "Popped element: " << s1.pop() << endl; // calling pop method
            break;

        case 3:
            cout << "Top element: " << s1.peek() << endl; // clalling peek method for top elemnt
            break;

        case 4:
            if (s1.isEmpty())
                cout << "Stack is Empty\n"; 
            else
                cout << "Stack is NOT Empty\n";
            break;

        case 5:
            if (s1.isFull())
                cout << "Stack is Full\n";
            else
                cout << "Stack is NOT Full\n";
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 0);

    return 0;
}