#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> items;
    string item;

    for(int i=0;i<3;i++) {
        cin >> item;
        items.push_back(item);
    }

    for(string i : items)
        cout << i << endl;
}
