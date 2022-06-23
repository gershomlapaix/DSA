#include <iostream>
#include <string>

using namespace std;

class Queue
{
public:
    Queue();

    bool isEmpty();
    bool isFull();
    void enqueue(int val);
    int dequeue();
    void display();

private:
    int front;
    int rear;
    int arr[0];
};

// definitions

bool Queue::isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Queue::isFull()
{
    if (rear == 4)
    { // rear == size(arr)-1
        return true;
    }
    else
    {
        return false;
    }
}

void Queue::enqueue(int val)
{
    if (isFull())
    {
        cout << "Queue is full.\n";
        return;
    }
    else if (isEmpty())
    {
        rear = front = 0;
        arr[rear] = val;
    }
    else
    {
        rear++;
        arr[rear] = val;
    }
}

int Queue::dequeue()
{
    int x;
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        return 0;
    }

    // if there is one element
    else if (front == rear)
    {
        x = arr[front];
        arr[front] = 0;
        rear = -1;
        front = -1;
        return x;
    }
    else
    {
        x = arr[front];
        arr[front] = 0;
        front++;
        return x;
    }
}

void Queue::display()
{
    cout << "All values in the queeu : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

Queue::Queue()
{
    front = -1;
    rear = -1;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    Queue que;

    int position, option, value;
    do
    {
        cout << "Which operation? 0 to exit. \n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty()\n";
        cout << "4. Count\n";
        cout << "5. display \n";
        cout << "6. clear screen\n";

        cin >>
            option;
        switch (option)
        {
        case 1:
            cout << "Enter an item to push in queue: ";
            cin >> value;
            que.enqueue(value);
            break;

        case 2:
            cout << "Dequed value is " << que.dequeue() << endl;
            break;

        case 3:
            if (que.isEmpty())
            {
                cout << "The queue is empty\n";
            }
            else
            {
                cout << "The queue is not empty\n";
            }
            break;

        case 5:
            que.display();
            break;

        case 6:
            system("cls");
            break;

        default:
            break;
        }
    } while (option != 0);

    return 0;
}