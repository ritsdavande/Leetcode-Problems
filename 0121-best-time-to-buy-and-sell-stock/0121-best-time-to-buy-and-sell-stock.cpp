class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int mini=arr[0],profit=0;
    int n=arr.size();
int cost;
        for(int i=0;i<n;i++){
            cost=arr[i]-mini;

       profit= max(profit,cost);
        mini=min(mini,arr[i]);
        }
       return profit; 
    }
};