#include <stack>
#include<iostream>
using namespace std;
class MinStack {
private:
    stack<int> content;
    stack<int> mins;
public:
    void push(int x) {
        content.push(x);
        //must add =, duplicate elements.
        if(mins.empty() || x <= mins.top())
            mins.push(x);
    }

    void pop() {
        int top = content.top();
        content.pop();
        if(top == mins.top())
        {
            mins.pop();
        }
    }

    int top() {
        return content.top();
    }

    int getMin() {
        return mins.top();
    }
};
int main()
{
        MinStack cs;
        cs.push(3);
        cout<<cs.getMin()<<endl;
        cs.push(4);
        cs.push(2);
        cs.push(1);
        cout<<cs.getMin()<<endl;
        cs.pop();
        cout<<cs.top()<<endl;
        cout<<cs.getMin()<<endl;
}
