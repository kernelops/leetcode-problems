// Last updated: 6/3/2026, 11:32:01 PM
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q;

    MyStack() {}

    void push(int x) {
        int s = q.size();
        q.push(x);

        // Rotate queue
        for (int i = 0; i < s; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty()) return -1;

        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        if (q.empty()) return -1;

        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};