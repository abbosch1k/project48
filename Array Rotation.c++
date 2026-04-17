#include <iostream>
using namespace std;

int main() {
    int a[3]={1,2,3};
    int t=a[0];

    a[0]=a[1];
    a[1]=a[2];
    a[2]=t;

    for(int i=0;i<3;i++) cout<<a[i]<<" ";
}
