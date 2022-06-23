#include <iostream>
#include <string>

using namespace std;

class CircularQueue
{
public:
    CircularQueue();

    bool isEmpty();
    bool isFull();
    void enqueue(int val);
    int dequeue();
    void display();
    int count();

private:
    int front;
    int rear;
    int arr[0];
    int itemCount;
};

// definitions

bool CircularQueue::isEmpty()
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

bool CircularQueue::isFull()
{
    if ((rear + 1) % 5 == front)
    { // rear == size(arr)-1
        return true;
    }
    else
    {
        return false;
    }
}

void CircularQueue::enqueue(int val)
{
    if (isFull())
    {
        cout << "CircularQueue is full.\n";
        return;
    }
    else if (isEmpty())
    {
        rear = front = 0;
        arr[rear] = val;
    }
    else
    {
        rear = (rear + 1) % 5;
        arr[rear] = val;
    }
    itemCount++; // keept it common
}

int CircularQueue::dequeue()
{
    int x;
    if (isEmpty())
    {
        cout << "CircularQueue is empty\n";
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
        front = (front + 1) % 5;
        return x;
    }
}

int CircularQueue::count()
{
    return itemCount;
}

void CircularQueue::display()
{
    cout << "All values in the queeu : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

CircularQueue::CircularQueue()
{
    itemCount = 0;
    front = -1;
    rear = -1;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    CircularQueue que;

    int position, option, value;
    do
    {
        cout << "Which operation? 0 to exit. \n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty()\n";
        cout << "4. Count\n";
        cout << "5. display \n";
        cout << "6. Get elements count.\n";
        cout << "7. clear screen\n";

        cin >>
            option;
        switch (option)
        {
        case 1:
            cout << "Enter an item to push in CircularQueue: ";
            cin >> value;
            que.enqueue(value);
            break;

        case 2:
            cout << "Dequed value is " << que.dequeue() << endl;
            break;

        case 3:
            if (que.isEmpty())
            {
                cout << "The CircularQueue is empty\n";
            }
            else
            {
                cout << "The CircularQueue is not empty\n";
            }
            break;

        case 5:
            que.display();
            break;

        case 6:
            cout << "The number of elements is " << que.count() << endl;
            break;
        case 7:
            system("cls");
            break;

        default:
            break;
        }
    } while (option != 0);

    return 0;
}