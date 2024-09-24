class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0, bestBuy=prices[0]; // initialise maxProfit and bestBuy , Best buy toh pehla din utna hi hoga aur stock hmesha future me sell hoga

        for(int i=1;i<prices.size();i++) { // 1 se end tk loop chalaye taaki hmko samajh aa jaye ki kon sa best time hai 
            if(prices[i]>bestBuy) {
                maxProfit=max(maxProfit,prices[i]-bestBuy); // agar price future wala bada hai bestbuy se tabhi profit aayega
            }
            bestBuy = min(bestBuy, prices[i]); // harr baar array me aage badhke dekhna hai ki bestBuy kya hai, kya abhi ka price peeche waale sbse chote wale se baada hai? hai toh bestBuy update kro.
        }
        return maxProfit;
    }
};
