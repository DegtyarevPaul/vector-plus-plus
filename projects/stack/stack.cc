#include <vector>
#include <iostream>

using namespace std;

const int MAX = 5;
class Stack
{
private:
    int data[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    bool push(int k)
    {
        if (top < MAX - 1)
        {
            ++top;
            data[top] = k;
            return true;
        }
        return false;
    }
    int pop()
    {
        if (top != -1)
            return data[top--];
        else
            throw; //
    }
    int size()
    {
        return top + 1;
    }
};

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    cout << "Size with 5 elems: " << stack.size() << endl;
    cout << "The top contained: " << stack.pop() << endl;
    cout << "Size after one pop: " << stack.size() << endl;
    return 0;
}