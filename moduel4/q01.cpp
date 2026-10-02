#include <iostream>
#include <iomanip>

int main() {

    //input
    double price, quantity, serviceCharge, numStudents;

    std::cout << "Enter meal price: ";
    std::cin >> price;

    std::cout << "Enter quantity: ";
    std::cin >> quantity;

    std::cout << "Enter service charge(%): ";
    std::cin >> serviceCharge;
    serviceCharge /= 100;

    std::cout << "Enter number of students: ";
    std::cin >> numStudents;

    //processing
    double subtotal = price * quantity;
    double total = subtotal + (subtotal * serviceCharge);
    double sharePerStudent = total / numStudents;

    //output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Subtotal = " << subtotal << std::endl;
    std::cout << "Service charge = " << subtotal * serviceCharge << std::endl;
    std::cout << "Final bill = " << total << std::endl;
    std::cout << "Share/student = " << sharePerStudent << std::endl;
    return 0;
}

