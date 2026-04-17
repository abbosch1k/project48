#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("file.txt");
    string s;
    int lines=0;

    while(getline(f,s)) lines++;

    cout<<lines;
}
