#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("log.txt", ios::app);
    f<<"event\n";
}
