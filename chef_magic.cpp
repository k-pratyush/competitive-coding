#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct box {
	int coin;
};

int main() {
	int t;
	int gold_box;
	int num_swaps;
	int boxes;
	cin >> t;

	while(t--) {
		vector <box> b;
		int position_a, position_b;

		cin >> boxes >> gold_box >> num_swaps;

		b.resize(boxes);

		for(int i = 0; i < boxes; i++) {
			b[i].coin = 0;
		}

		b[gold_box - 1].coin = 1;

		for(int i = 0; i < num_swaps; i++) {
			cin >> position_a >> position_b;
			swap(b[position_a - 1].coin, b[position_b - 1].coin);
		}
		for(int i = 0; i < boxes; i++) {
			if(b[i].coin == 1)
				cout << i+1 << "\n";
		}
	}
}