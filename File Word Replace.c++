#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("a.txt");
    string s;

    while(getline(f,s)) {
        if(s=="old") cout<<"new\n";
        else cout<<s<<endl;
    }
}
