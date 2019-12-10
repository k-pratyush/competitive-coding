#include<unordered_set>
#include<unordered_map>
#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
#include<set>
#include<map>

using namespace std;

void stl() {

    std::vector<int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    a.push_back(4);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);


    //Lower and upper bound

    auto k = std::lower_bound(a.begin(), a.end(), 3);
    auto u = std::upper_bound(a.begin(), a.end(), 4);
    cout << (k-a.begin()) << endl;
    cout << (u-a.begin()) << endl;

    //Equal range
    auto eq = std::equal_range(a.begin(), a.end(), 3);
    cout << eq.second - eq.first << endl;

    //vector traversal
    for (auto x : a)
        cout << x << " ";


    //string
    string s = "apple";
    string t = "tim";
    string ta = t+s;
    cout << ta << endl;
    cout << ta.substr(3,5) << endl;


    //Set
    set<int> se;
    se.insert(1);
    se.insert(2);
    se.insert(2);
    se.insert(3);

    cout << se.count(1) << " " << se.count(2) << " " << se.count(5) << endl;

    se.erase(3);

    cout << se.count(3) << endl;
    cout << se.size() << endl;

    se.insert(3);
    se.insert(5);
    se.insert(4);
    se.insert(7);

    for(auto x: se) {
        cout << x << " ";
    }
    cout << endl << endl << endl;

    //Multiset
    multiset<int> mse;
    mse.insert(1);
    mse.insert(2);
    mse.insert(4);
    mse.insert(3);
    mse.insert(10);
    mse.insert(3);

    for(auto x: mse) {
        cout << x << " ";
    }

    cout << endl << endl << endl;

    cout << mse.count(3) << endl;


    // Map
    map<string, int> mp;
    mp["apple"] = 5;
    mp["sony"] = 2;

    cout << mp["apple"] << endl;

    for(auto k : mp) {
        cout << k.first << " " << k.second << endl;
    }

    // Unordered set

    unordered_set<int> use;
    use.insert(1);
    use.insert(2);
    use.insert(4);
    use.insert(5);
    use.insert(7);

    cout << use.count(3) << endl;

    for(auto x: use) {
        cout << x << " ";
    }


    cout << endl;

    unordered_map<int, int> ump;
    ump.insert(pair<int, int>(4,5));
    ump.insert(pair<int, int>(5,6));
    ump.insert(pair<int, int>(6,7));
    ump.insert(pair<int, int>(7,8));

    for(auto x: ump) {
        cout << x.first << " ";
    }

}

int main() {

    stl();

}