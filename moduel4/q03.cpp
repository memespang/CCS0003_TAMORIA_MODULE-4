#include <iostream>
#include <iomanip>

int main() {

    //input
    double base, distance, kmRate, toll, bookingPercentage, passengers;

    std::cout << "Enter base fare: ";
    std::cin >> base;

    std::cout << "Enter distance traveled (km): ";
    std::cin >> distance;

    std::cout << "Enter rate per kilometer: ";
    std::cin >> kmRate;

    std::cout << "Enter toll amount: ";
    std::cin >> toll;

    std::cout << "Enter booking percentage(%): ";
    std::cin >> bookingPercentage;

    std::cout << "Enter number of passengers: ";
    std::cin >> passengers;

    //processing
    double distance_charge = distance * kmRate;
    double pre_total = base + distance_charge + toll;
    double final_total = pre_total + (pre_total * bookingPercentage / 100);
    double share_per_passenger = final_total / passengers;
    
    //output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Distance charge: " << distance_charge << std::endl;
    std::cout << "Pre-fee: " << pre_total << std::endl;
    std::cout << "Booking charge: " << pre_total * bookingPercentage / 100 << std::endl;
    std::cout << "Total: " << final_total << std::endl;
    std::cout << "Per passenger: " << share_per_passenger << std::endl;
    return 0;
}
