/*

Implement Queue using Stacks 
Implement the following operations of a queue using stacks.

push(x) -- Push element x to the back of queue.
pop() -- Removes the element from in front of queue.
peek() -- Get the front element.
empty() -- Return whether the queue is empty.
Notes:
You must use only standard operations of a stack -- which means only push to top, peek/pop from top, size, and is empty operations are valid.

*/

class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        s1.push(x);
    }
    // Removes the element from in front of queue.
    void pop(void) {
        if(s2.size() <= 0)
        {
            while(s1.size() > 0)
            {
                int data = s1.top();
                s1.pop();
                s2.push(data);
            }
        }
        s2.pop();
    }
    // Get the front element.
    int peek(void) {
        if(s2.size() <= 0)
        {
            while(s1.size() > 0)
            {
                int data = s1.top();
                s1.pop();
                s2.push(data);
            }
            return s2.top();
        }
        return s2.top();
    }
    // Return whether the queue is empty.
    bool empty(void) {
        return (s1.size()==0 && s2.size()==0);
    }
private:
    stack<int> s1;
    stack<int> s2;
};