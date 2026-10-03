class Solution {
public:
    
    int operation(char ch, int a, int b) {
        switch (ch) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        }
        return -1;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" ||
                tokens[i] == "/") {
                char ch = tokens[i][0];
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                int ans = operation(ch, a, b);
                s.push(ans);
            } else {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};