/*

  Queue Implementation - version 1.0
  by Marcus PRado Silva

  last changed 06/27/2022

*/

// ------------------------------- //

#include <iostream>
#include <stdio.h>

using namespace std;

// ------------------------------- //
//          Queue Class            //
// ------------------------------- //
class Queue
{
    // ------------------------------- //
    //      Class  Attributes          //
    // ------------------------------- //

    // Last element index
private:
    int l;
    int f;
    int arr[1000];

    // ------------------------------- //
    //       Class  Methods            //
    // ------------------------------- //

public:

    Queue()
    {
        l = f = 0;
       for(int i = 0 ; i < 1000; i++)
          arr[i] = 0 ;
    }
    // Method to insert a element in Queue
    void push(int i)
    {
        arr[l++] = i;
    }

    // Method to remove a element in Queue
    int pop()
    {
        int ans = arr[f];
        int j = 0;

        for(int i = 1; i < l+1; i++,j++)
           arr[j] = arr[i];

        l--;
        return ans;
    }

    // Method to return the last element 
    int peek()
    {
        int i = arr[f];
        return i;
    }

    // Method to return the last element 
    void printPeek()
    {
        printf("Peek Element: %d", peek());
        printf("\n");
    }

    // Method to check if the Queue is already empty
    bool isEmpty()
    {
        return l == 0;
    }

    // Method to clear the Queue
    void clear()
    {
        for (int i = 0; i < l; i++)
            int trash = pop();
    }

    // Method to check if  the Queue is already Full
    bool isFull()
    {
        return l == sizeof(arr) / sizeof(int);
    }

    // Method to print the Element of each Queue Position
    void print()
    {
        for (int i = f; i < l; i++)
            printf("Position: %d  Element: %d \n", i, arr[i]);

        printf("\n");
    }

    // Method to return the sum of Queue Elements
    int sum()
    {
        int ans = 0;

        for (int i = f; i < l; i++)
        {
            ans += arr[i];
        }

        return ans;
    }

    // Method to print the sum of Queue Elements
    void printSum()
    {
        printf("Sum of Elements: %d  ", sum());
        printf("\n");
    }

    // Method to return the average of Queue Elements
    float getAverage()
    {
        return (float)(sum() / l);
    }

    // Method to print the average of Queue Elements
    void printAverage()
    {
        printf("Average of Elements: %2.f  ", getAverage());
        printf("\n");
    }

    // Method to return the largest element of Queue
    int getLargest()
    {
        int ans = 0;

        for (int i = f; i < l; i++)
        {
            ans = (arr[i] > ans) ? arr[i] : ans;
        }

        return ans;
    }

    // Method to print the largest of Queue Elements
    void printLargest()
    {
        printf("Largest Element: %d  ", getLargest());
        printf("\n");
    }

    // Method to return the lowest element of Queue
    int getLowest()
    {
        int ans = 10000;

        for (int i = 0; i < l; i++)
        {
            ans = (arr[i] < ans ) ? arr[i] : ans;
        }

        return ans;
    }

    // Method to print the lowest element of Queue
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
    Queue myQueue;
    // Insert numbers from 1 to 5
    printf("First Queue state after insert[1-20]:\n");
    for (int i = 1; i <= 20; i++)
    {
        myQueue.push(i);
    }

    myQueue.print(); // See the state of the Queue

    // Delete the last 6 elements
    myQueue.pop();
    myQueue.pop();
    myQueue.pop();
    myQueue.pop();
    myQueue.pop();
    myQueue.pop();

    printf("Queue state after 6 deletes:\n");
    myQueue.print(); // See the state of the Queue

    myQueue.push(4); // Insert one element
    printf("Queue state after 1 insert (number 4):\n");

    myQueue.print(); // See the state of the Queue

    printf("Queue Information:\n");
    myQueue.printPeek();
    myQueue.printLowest();
    myQueue.printLargest();
    myQueue.printSum();
    myQueue.printAverage();
    printf("\n");

    return 0;
}