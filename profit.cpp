#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxProfit(vector<int>& prices) {
    int total = 0;
    for(int i = 0; i < prices.size() - 1; i++)
		if(prices[i+1] > prices[i])
			total += prices[i+1] - prices[i];
    return total;
}

int main() {
	vector<int> prices = {7,1,5,3,6,4};
	cout << maxProfit(prices) << endl;
}
