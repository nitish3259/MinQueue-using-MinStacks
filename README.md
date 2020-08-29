# MinQueue-using-MinStacks

This is a CPP implementation of a MinQueue that provides the basic functionalities of a queue with the added functionality of getting the smallest element currently in the queue in amortized O(1) time complexity.

The MinQueue uses two MinStacks to simulate the behaviour of a Queue. Functionalities :

->push(x) : push element x at the back of the queue
->pop : remove an element from the front of the queue.
->top : return the element currently at the front of the queue.
->getMin : return the current smallest element in the queue.
