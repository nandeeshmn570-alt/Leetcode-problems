class BrowserHistory {
public:
    class Node {
    public:
        string pageUrl;
        Node* nextPage;
        Node* previousPage;
        Node(string url) {
            pageUrl = url;
            nextPage = NULL;
            previousPage = NULL;
        }
    };
    Node* currentPage;
    BrowserHistory(string homepage) { currentPage = new Node(homepage); }

    void visit(string url) {
        Node* newPage = new Node(url);
        currentPage->nextPage = newPage;
        newPage->previousPage = currentPage;
        currentPage = newPage;
    }

    string back(int steps) {
        while (steps > 0) {
            if (currentPage->previousPage != NULL) {
                currentPage = currentPage->previousPage;
            } else {
                break;
            }
            steps--;
        }

        return currentPage->pageUrl;
    }

    string forward(int steps) {
        while (steps > 0) {
            if (currentPage->nextPage != NULL) {
                currentPage = currentPage->nextPage;
            } else {
                break;
            }
            steps--;
        }

        return currentPage->pageUrl;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */