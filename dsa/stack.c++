#include <iostream>
#include <string>

using namespace std;

class Stack
{
public:
    Stack();

    bool isEmpty() const
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int val);

    int pop();

    int count() const;

    int peek(int pos) const;

    void display();

private:
    int top;
    int arr[5];
};

// push in the stack
void Stack::push(int val)
{
    if (isFull())
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        top++;
        arr[top] = val;
    }
}

int Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack underflow\n";
        return 0;
    }
    else
    {
        int popValue = arr[4];
        arr[top] = 0;
        top--;

        return popValue;
    }
}

int Stack::count() const
{
    return (top + 1);
}

int Stack::peek(int pos) const
{
    if (isEmpty())
    {
        cout << "Stack underflow\n";
        return 0;
    }
    else
    {
        return arr[pos];
    }
}

void Stack::display()
{
    cout << "All values in the stack : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

Stack::Stack()
{
    top = -1;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    Stack stack;
    int position, option, value;

    do
    {
        cout << "Which operation? 0 to exit. \n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty()\n";
        cout << "4. Count\n";
        cout << "5. display \n";

        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter an item to push in stack: ";
            cin >> value;
            stack.push(value);
            break;

        case 2:
            cout << "Popped value is " << stack.pop() << endl;
            break;
        case 3:
            if (stack.isEmpty())
            {
                cout << "The stack is empty\n";
            }
            else
            {
                cout << "The stack is not empty\n";
            }
            break;

        case 5:
            stack.display();
            break;

        default:
            break;
        }
    } while (option != 0);

    return 0;
}
