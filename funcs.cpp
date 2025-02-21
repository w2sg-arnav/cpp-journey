#include <iostream>

int addNumbers (int first_p, int second_p){
    int result = first_p + second_p;
    return result;
}

int main (){
    int first_n {13};
    int second_n {7};

    std::cout << "first number is : " << first_n << std::endl;
    std::cout << "second number is :" << second_n << std::endl;
     int sum = first_n + second_n;
     std::cout << "sun: " << sum << std::endl;
    sum = addNumbers (25,7);
    std::cout << "sum :" << sum << std::endl;
    sum = addNumbers (30,54);
    std::cout << "sum :" << sum << std::endl;
    std::cout << "sun :" << addNumbers (3,42) <<std::endl;

    return 0;
}