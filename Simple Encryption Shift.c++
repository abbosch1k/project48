#include <iostream>
using namespace std;

int main() {
    string s="abc";

    for(char &c:s)
        c+=1;

    cout<<s;
}
