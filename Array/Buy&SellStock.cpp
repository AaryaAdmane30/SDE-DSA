// given an array prices[], where prices[i] is the price of a stock on the i-th day.
// You want to maximize your profit by choosing one day to buy the stock and a different later day to sell it.

//  Return the maximum profit you can achieve.
//  If no profit is possible, return 0.

//  Track the Minimum price soo far 

//  if i had brought at lowest price so far what would be my profit today ?

//  Goal is to Find Maximum Profit You can achieve ( only one transation => buy one sell one )


//  Example :

// prices = {7,1,5,3,6,4}


//  Day = 0  at 0 index , price =7 and minprice = 7

// ProfitToday = price[i] - minPrice[i] = 7-7 =0 

//  maxProfit = 0 


//  Day = 1  at 1 index , price =1 and minprice = 1

// ProfitToday = price[i] - minPrice[i] = 1-1 =0 

//  maxProfit = 0 


//  Day = 2  at 0 index , price =5 and minprice = 1

// ProfitToday = price[i] - minPrice[i] = 5-1 =4 

//  maxProfit = 4  ☃️


//  Day = 3  at 3 index , price = 3 and minprice = 1

// ProfitToday = price[i] - minPrice[i] = 3-1 = 2 

//  maxProfit =  4 > 2 = 4  ☃️



//  Day = 4  at 4 index , price = 6 and minprice = 1

// ProfitToday = price[i] - minPrice[i] = 6-1 = 5 

//  maxProfit =  5 > 4 = 5  ☃️



//  Day = 5  at 5 index , price = 4 and minprice = 1

// ProfitToday = price[i] - minPrice[i] = 4-1 = 3

//  maxProfit =  5 > 3 = 5  ☃️

//  Final ans Profit made soo far is 5 and sell at 6(Days Total  ..n=6)



//  Greedy Approach :

// ✨For single transaction (LeetCode 121), greedy works perfectly.


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;


int  maxProfit(vector<int>& prices){ 

    // ☃️ Why int maxProfit (not vector<int>)
    //  Returning a vector<int> means  going to give you multiple values (a list of numbers)

// Profit is a single value → e.g. 5 in {7,1,5,3,6,4}.
// 

    int minPrice = INT_MAX; // store minimum Price soo far 
    int maxProfit = 0 ; // store max profit soo far 


    // int minPrice = INT_MAX;  it is initialized to many large number so that the first stock price become minimum


    for(int price: prices){
        // update minPrice if we find the lower Price :
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit , price - minPrice);
    }
    return maxProfit;  // return the maxprofit obtained soo far 

}

int main () {
    vector<int> prices = {7,1,5,3,6,4};

    int  ans = maxProfit(prices);

 cout << "Max Profit obtained is: " << ans << endl;

    




    return 0;
}



 

