#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

int main() {

    //input
    std::string productName;
    double unitPrice, quantity, discountPercentage, shippingCostperBox, unitPerBox;
    std::cout << "Product: ";
    std::getline(std::cin, productName);

    std::cout << "Unit Price: ";
    std::cin >> unitPrice;

    std::cout << "Quantity: ";
    std::cin >> quantity;

    std::cout << "Discount Percentage (%): ";
    std::cin >> discountPercentage;

    std::cout << "Shipping Cost per Box: ";
    std::cin >> shippingCostperBox;

    std::cout << "Units per Box: ";
    std::cin >> unitPerBox;

    //processing
    double subtotal = unitPrice * quantity;
    double discountAmount = (discountPercentage / 100) * subtotal;
    double discountedTotal = subtotal - discountAmount;
    double exactBoxes = quantity / unitPerBox;
    int boxesRequired = ceil(exactBoxes);
    double shippingTotal = boxesRequired * shippingCostperBox;
    double finalTotal = discountedTotal + shippingTotal;

    //output
    std::cout << "\n************ Invoice ************\n" << std::endl;
    std::cout << quantity << "x " << productName << "\t₱" << std::fixed << std::setprecision(2) << unitPrice * quantity << std::endl;
    std::cout << "\n*********************************" << std::endl;
    std::cout << "\nSubtotal\t₱" << subtotal << std::endl;
    std::cout << "Discount\t₱" << discountAmount << std::endl;
    std::cout << "Merchandise\t₱" << discountedTotal << std::endl;
    std::cout << "Exact Boxes\t" << exactBoxes << std::endl;

    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Boxes Required\t" << boxesRequired << std::endl;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Shipping\t₱" << shippingTotal << std::endl;
    std::cout << "Amount Due\t₱" << finalTotal << std::endl;
    std::cout << "\n*********************************" << std::endl;

    return 0;
}