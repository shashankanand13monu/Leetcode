class MedianFinder {
public:
    MedianFinder() {
        
    }
    
    priority_queue<int>maxq;
    // priority_queue<int> g
    priority_queue<int,vector<int>,greater<int>>minq;
    // priority_queue<int, vector<int>, greater<int> >

    void addNum(int num) {
        if(maxq.empty() or maxq.top()>num)
            maxq.push(num);
        else
            minq.push(num);
        
        if(maxq.size()>minq.size()+1)
        {
            minq.push(maxq.top());
            maxq.pop();
        }
        else if(minq.size()>maxq.size()+1)
        {
            maxq.push(minq.top());
            minq.pop();
        }
    }
    
    double findMedian() {
        if(maxq.size()==minq.size())
            return (maxq.top()+minq.top())/2.0;
        else if( maxq.size()>minq.size())
            return maxq.top();
        
        return minq.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */