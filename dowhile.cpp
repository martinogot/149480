#include <iostream>
using namespace std;

int main (){
    int num=100;
    do {
        cout<<num<<",";
        num+=2; //loop control variable incremented by 2
    } while (num <= 22);
    return 0;
}