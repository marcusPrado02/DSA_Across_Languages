/*

  Stack Implementation - version 1.0
  by Marcus PRado Silva

  last changed 06/27/2022

*/

// ------------------------------- //

#include <iostream>
#include <stdio.h>

using namespace std;

// ------------------------------- //
//          Stack Class            //
// ------------------------------- //
class Stack
{
    // ------------------------------- //
    //      Class  Attributes          //
    // ------------------------------- //

    // Last element index
private:
    int l;
    int arr[1000];

    // ------------------------------- //
    //       Class  Methods            //
    // ------------------------------- //

public:

    Stack()
    {
        l = 0;
       for(int i = 0 ; i < 1000; i++)
          arr[i] = 0 ;
    }
    // Method to insert a element in Stack
    void push(int i)
    {
        arr[l++] = i;
    }

    // Method to remove a element in Stack
    int pop()
    {
        int i = arr[l--];
        return i;
    }

    // Method to return the last element 
    int peek()
    {
        int i = arr[l-1];
        return i;
    }

    // Method to return the last element 
    void printPeek()
    {
        printf("Peek Element: %d", peek());
        printf("\n");
    }

    // Method to check if the Stack is already empty
    bool isEmpty()
    {
        return l == 0;
    }

    // Method to clear the Stack
    void clear()
    {
        for (int i = 0; i < l; i++)
            int trash = pop();
    }

    bool isFull()
    {
        return l == sizeof(arr) / sizeof(int);
    }

    // Method to print the Element of each Stack Position
    void print()
    {
        for (int i = 0; i < l; i++)
            printf("Position: %d  Element: %d \n", i, arr[i]);

        printf("\n");
    }

    // Method to return the sum of Stack Elements
    int sum()
    {
        int ans = 0;

        for (auto &&i : arr)
        {
            ans += i;
        }

        return ans;
    }

    // Method to print the sum of Stack Elements
    void printSum()
    {
        printf("Sum of Elements: %d  ", sum());
        printf("\n");
    }

    // Method to return the average of Stack Elements
    float getAverage()
    {
        return (float)(sum() / l);
    }

    // Method to print the average of Stack Elements
    void printAverage()
    {
        printf("Average of Elements: %2.f  ", getAverage());
        printf("\n");
    }

    // Method to return the largest element of Stack
    int getLargest()
    {
        int ans = 0;

        for (auto &&i : arr)
        {
            ans = (i > ans) ? i : ans;
        }

        return ans;
    }

    // Method to print the largest of Stack Elements
    void printLargest()
    {
        printf("Largest Element: %d  ", getLargest());
        printf("\n");
    }

    // Method to return the lowest element of Stack
    int getLowest()
    {
        int ans = 10000;

        for (int i = 0; i < l; i++)
        {
            ans = (arr[i] < ans ) ? arr[i] : ans;
        }

        return ans;
    }

    // Method to print the lowest element of Stack
    void printLowest()
    {
        printf("Lowest Element: %d  ", getLowest());
        printf("\n");
    }

};

// ------------------------------- //
//    Testing the Implementation   //
// ------------------------------- //

int main()
{
    Stack myStack;
    // Insert numbers from 1 to 5
    printf("First stack state after insert[1-20]:\n");
    for (int i = 1; i <= 20; i++)
    {
        myStack.push(i);
    }

    myStack.print(); // See the state of the stack

    // Delete the last 6 elements
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();

    printf("Stack state after 6 deletes:\n");
    myStack.print(); // See the state of the stack

    myStack.push(4); // Insert one element
    printf("Stack state after 1 insert (number 4):\n");

    myStack.print(); // See the state of the stack

    printf("Stack Information:\n");
    myStack.printPeek();
    myStack.printLowest();
    myStack.printLargest();
    myStack.printSum();
    myStack.printAverage();
    printf("\n");

    return 0;
}