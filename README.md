# Stack Program

## Overview

Welcome to the Stack Program! This C++ program implements a stack using two queues. It provides essential stack operations such as push, pop, top, size, and checking whether the stack is empty.

## Features

- **Empty Check:**
  - Determines whether the stack is empty.

- **Size:**
  - Returns the current size of the stack.

- **Top:**
  - Returns the element at the top of the stack.

- **Push:**
  - Adds an element to the top of the stack.

- **Pop:**
  - Removes the element from the top of the stack.

## Test Runs

The program has undergone testing to ensure the correct functionality of the stack operations. Various test cases cover scenarios, including stack operations on an empty stack and a stack with multiple elements.

1. Empty Check
   - Verifies whether the stack correctly reports as empty.

2. Size
   - Validates the accurate calculation of the stack size.

3. Top
   - Retrieves and displays the top element of the stack.

4. Push
   - Adds elements to the stack and checks for the correct size.

5. Pop
   - Removes elements from the stack and verifies the updated size.

## Code Organization

All the code for this project is organized into the following files:

- `stack.h` (Implemented by Jose Barron): Header file defining the Stack class and its members.
- `main.cc`: Main program file where the stack operations are tested.
- `rational.h` and `rational.cc`: Files related to a rational number class, with `rational.h` being implemented.
- `stack.in`: Input file for testing the stack program.
- `stack.out`: Output file for storing the results of the test runs.

## Data Structures and Algorithms Used

The stack is implemented using two queues. The algorithm for the push operation involves enqueuing the element in the non-empty queue. The pop operation is implemented by transferring elements between the two queues until the desired element is dequeued.

## Skills Showcase

This project demonstrates proficiency in the following areas:

- **C++ Programming:**
  - Implements the `stack.h` file using C++ language features and templates.
  - Utilizes object-oriented principles for the rational number class.

- **Data Structures and Algorithms:**
  - Implements a stack using two queues, showcasing algorithmic problem-solving skills.
  - Demonstrates the efficiency of the push and pop operations with the chosen data structures.

- **Problem Solving:**
  - Addresses the challenge of implementing a stack with two queues efficiently.
  - Develops solutions for performing stack operations and handling edge cases.

- **Documentation:**
  - Provides clear and detailed documentation for the stack program and the rational number class.

- **Testing:**
  - Conducts thorough testing with various test cases to ensure the reliability and correctness of stack operations.
  - Validates the behavior of the program under different input conditions.

These skills collectively showcase the ability to design, implement, and document a C++ program that effectively addresses a specific problem domain.

