#include <iostream>

int main(){
    //compile time error
    std::cout <<"hello world" << std::endl;

    //run tume error
    int value = 7/0;
    std::cout << "value: " << value << std::endl;

    return 0;
}