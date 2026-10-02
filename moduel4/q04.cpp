#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    //input
    double wall_width, wall_height, coats, coverage;

    std::cout << "Enter wall width (m): ";
    std::cin >> wall_width;

    std::cout << "Enter wall height (m): ";
    std::cin >> wall_height;

    std::cout << "Enter number of coats: ";
    std::cin >> coats;

    std::cout << "Enter coverage per liter (m²/L): ";
    std::cin >> coverage;

    //processing
    double wall_area = wall_width * wall_height;
    double total_area = wall_area * coats;
    double num_cans = total_area / coverage;

    //output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Wall area: " << wall_area << std::endl;
    std::cout << "Total paint area: " << total_area << std::endl;
    std::cout << "Exact cans: " << num_cans << std::endl;
    std::cout << "Cans to buy: " << std::fixed << std::setprecision(0) << std::ceil(num_cans) << std::endl;

    return 0;
}
