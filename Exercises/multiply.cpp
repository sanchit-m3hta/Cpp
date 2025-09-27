#include <iostream>
#include <vector>
int main(void){
    
    std::vector<int> vec {};

    std::cout << "Please enter a number: ";
    int num {};
    std::cin >> num;
    vec.push_back(num);
    for (int i{0}; i < 10; i++){
        vec.push_back(i);
    }

    for(int i {0}; i < vec.size(); i++){
        std::cout << vec.at(i) << std::endl;
    }
    
    
    return 0;
}