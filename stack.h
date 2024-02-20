//***************************************************************************
//
// Jose Barron
// Z02013735
// Fall 2023 CSCI 340 - PE1 Data Struct Algorithm Analysis
// Assignment 03: This program is to implement that Stack class members
// given.
// Due Date: 9/18/23
// I certify that this is my own work and where appropriate an extension
// of the starter code provided for the assignment.
//
//***************************************************************************

#ifndef STACK_H
#define STACK_H
#include <queue>

template<typename T>
class Stack
{
private:
    std::queue<T> q1;	// These queues are where the stack's elements 
    std::queue<T> q2;	// are to be saved.

public:
    bool empty() const;
    int size() const;
    const T& top();
    void push(const T &val);
    void pop();
};


// Note that the members of a template go into a .h file since 
// they are not compiled directly into a .o file like the members 
// of regular/non-template classes.




// Place your Stack class member implementations here.

template<typename T>
bool Stack<T>::empty() const
{
    if( q1.empty())
    {
        return true;
    }
    return false;
}

template<typename T>
int Stack<T>::size() const
{
    int resulting_size = 0;
    return resulting_size = q1.size();
}

template<typename T>
const T& Stack<T>::top()
{
    if(empty())
    {
        throw "List is empty";
    }
    return q1.back();
}

template<typename T>
void Stack<T>::push(const T &val)
{
    return q1.push(val);
}

template<typename T>
void Stack<T>::pop()
{
    if(empty())
    {
        throw "List is empty";
    }
   while ( q1.size() > 1)
    {
        T i = q1.front();
        q1.pop();
        q2.push(i);
    }
   q1.pop();
   while ( ! q2.empty())
    {
        T i = q2.front();
        q2.pop();
        q1.push(i);
   }

}

#endif // STACK_H
