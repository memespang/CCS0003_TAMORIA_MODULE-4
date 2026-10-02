#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    //input
    double x1, y1, x2, y2;
    std::cout << "Enter start point using this format (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Enter target point using this format (x2 y2): ";
    std::cin >> x2 >> y2;

    //processing
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    //output
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "\ndx: " << x2 - x1 << std::endl;
    std::cout << "dy: " << y2 - y1 << std::endl;
    std::cout << "Distance: " << distance << std::endl;
    std::cout << "Rounded distance: " << std::fixed << std::setprecision(0) << round(distance) << std::endl;

    return 0;
}
