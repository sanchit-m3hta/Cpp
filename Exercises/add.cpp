#include <iostream>

int add(int a, int b){
    return a + b;
}

int main(){

    int a,b {};
    a = 5, b = 7;
    std::cout << a << " + " << b << " = " <<add(a,b) << std::endl;
    return 0;
}