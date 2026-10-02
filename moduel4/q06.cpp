#include <iostream>
#include <iomanip>

int main() {

    //input
    double byte_size;
    std::cout << "Enter the size in bytes: ";
    std::cin >> byte_size;

    //processing
    double kilobyte_size = byte_size / 1024.0;
    double megabyte_size = kilobyte_size / 1024.0;
    double gigabyte_size = megabyte_size / 1024.0;

    //output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Kilobyes: " << kilobyte_size << std::endl;
    std::cout << "Megabytes: " << megabyte_size << std::endl;
    std::cout << "Gigabytes: " << std::fixed << std::setprecision(4) << gigabyte_size << std::endl;
    std::cout << "Whole Megabytes: " << int(megabyte_size) << std::endl;

    return 0;
}
