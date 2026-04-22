class MyStack {
public:
    queue<int> q;

    void push(int x) {
        q.push(x);
        int size = q.size();
        
        // Rotate elements
        for (int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int topElement = q.front();
        q.pop();
        return topElement;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};