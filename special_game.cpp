#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n, m, players_in_team;
		cin >> n >> m;
		players_in_team = n/m;
		cout << players_in_team - 1;
	}
}