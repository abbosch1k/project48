#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    if(rand()%2)
        cout<<"Event A";
    else
        cout<<"Event B";
}
