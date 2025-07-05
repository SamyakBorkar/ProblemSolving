#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int size;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow";
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            cout << arr[top];
        }
        return -1;
    }

    bool isEmpty()
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

};

int main()
{
    Stack st(5);
    st.push(100);
    st.push(500);
    st.pop();
    st.peek();
}