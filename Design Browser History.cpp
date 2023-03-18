class BrowserHistory {
public:
    int pos;
    int tp;
    string mem[5001];
    BrowserHistory(string homepage) : pos(-1) , tp(0) {
        visit(homepage);
    }
    
    void visit(string url) {
        pos++;
        tp=pos;
        mem[tp++] = url; 
    }
    
    string back(int steps) {
        if(steps > pos) steps = pos;
        pos-=steps;
        return mem[pos];
    }
    
    string forward(int steps) {
        steps = min (tp - pos -1, steps);
        pos+=steps;
        return mem[pos];
    
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
