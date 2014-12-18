
"""
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
"""
class MinStack:
    def __init__(self):
        self.contents = []
        self.mins = []
        
    # @param x, an integer
    # @return an integer
    def push(self, x):
        self.contents.append(x)
        if len(self.mins) == 0 or x <= self.mins[-1]:
            self.mins.append(x)

    # @return nothing
    def pop(self):
        top = self.top()        
        if top == self.mins[-1]:
            self.mins.pop()
        ret = self.contents.pop()
        return ret 

    # @return an integer
    def top(self):
        return self.contents[-1]

    # @return an integer
    def getMin(self):
        return self.mins[-1]
