#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    //input
    double T1, T2, T3;

    std::cout << "Enter the first temperature: ";
    std::cin >> T1;
    
    std::cout << "Enter the second temperature: ";
    std::cin >> T2;

    std::cout << "Enter the third temperature: ";
    std::cin >> T3;

    //processing
    double average = (T1 + T2 + T3) / 3;
    double absolute_difference = fabs(T1-T3);

    //output
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Average temperature: " << average << std::endl;
    std::cout << "|T1 - T3|: " << absolute_difference << std::endl;
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Floor: " << floor(average) << std::endl;
    std::cout << "Ceil: " << ceil(average) << std::endl;
    std::cout << "Trunc: " << trunc(average) << std::endl;
    std::cout << "Round: " << round(average) << std::endl;

    return 0;
}
