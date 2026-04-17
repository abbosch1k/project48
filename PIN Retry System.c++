#include <iostream>
using namespace std;

int main() {
    int pin=1234, x;

    for(int i=0;i<3;i++) {
        cin>>x;
        if(x==pin) {
            cout<<"OK";
            break;
        }
    }
}
