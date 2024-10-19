class Solution{
    public:
    
    void heapify(vector<int>&v, int i, int n) {
        while(true) {
            int left = 2*i+1;
            int right = 2*i+2;
            int swapIndex = i;
            
            if(left < n && v[left]>v[i]) {
                swapIndex = left;
            }
            
            if(right < n && v[right]>v[swapIndex]) {
                swapIndex = right;
            }
            
            if(swapIndex == i) {
                break;
            }
            
            swap(v[i], v[swapIndex]);
            i = swapIndex;
        }
    }
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        //merger two heap vectors
        vector<int>c(a.begin(), a.end());
        c.insert(c.end(), b.begin(), b.end());
        
        //heapify
        for(int i=(c.size()/2)-1; i>=0; i--) {
            heapify(c, i, c.size());
        }
        return c;
    }
};