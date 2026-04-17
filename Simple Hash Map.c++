#include <iostream>
using namespace std;

int main() {
    int keys[3]={1,2,3};
    string vals[3]={"A","B","C"};

    int k=2;

    for(int i=0;i<3;i++)
        if(keys[i]==k)
            cout<<vals[i];
}
