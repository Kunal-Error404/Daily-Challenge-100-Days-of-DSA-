/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 */

 int maxProfit(int* prices, int pricesSize) {
    if (pricesSize<2){
        return 0;
    }
    int maxprof = 0;
   int curmin = prices[0];
   
   for(int i = 0;i<pricesSize;i++){
    if(prices[i]<curmin){
        curmin = prices[i];
    }
        else{
            int curprof = prices[i] - curmin;
            if(curprof>maxprof){
                maxprof = curprof;
            }
        }
    }
    return maxprof;
   
}