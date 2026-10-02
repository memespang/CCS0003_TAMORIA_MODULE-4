#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    //input 
    int attendees, seats_per_table;

    std::cout << "Enter number of attendees: ";
    std::cin >> attendees;
    
    std::cout << "Enter number of seats per table: ";
    std::cin >> seats_per_table;

    //processing
    double exact_tables = (double)attendees / seats_per_table;
    int table_needed = ceil(exact_tables);
    int total_seats = table_needed * seats_per_table;
    int unused_seats = total_seats - attendees;

    //output
    std::cout << "Exact tables: " << std::fixed << std::setprecision(2) << exact_tables << std::endl;
    std::cout << "Tables required: " << table_needed << std::endl;
    std::cout << "Total seats: " << total_seats << std::endl;
    std::cout << "Unused seats: " << unused_seats << std::endl;

    return 0;
}
