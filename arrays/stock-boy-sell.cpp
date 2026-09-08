 class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
     int minp = arr[0];
     int maxp = 0;  
     int profit;
     for(int i=1;i<n;i++){
        minp = min(minp , arr[i]);

        profit = arr[i] - minp;

        maxp = max(maxp , profit); 
     } 
     return maxp;
    }
};

