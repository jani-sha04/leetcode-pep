class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int& it: a){
            pq.push(it);

            if (pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};