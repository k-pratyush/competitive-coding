#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class TwoSum {
private:
	vector<int> numbers;
public:
	void add(int input);
	bool find(int value);
};

void TwoSum::add(int input) {
	numbers.push_back(input);
}

bool TwoSum::find(int value) {
	unordered_set<int> s;
	for(int i = 0; i < numbers.size(); i++) {
		if(s.find(value-numbers[i]) != s.end())
			return true;
		s.insert(numbers[i]);
	}
	return false;
}

int main() {
	TwoSum t;
	t.add(1);
	t.add(4);
	t.add(5);
	t.add(6);
	t.add(2);
	cout << t.find(10) << endl;
	cout << t.find(20) << endl;
}
