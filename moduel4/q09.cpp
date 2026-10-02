#include <iostream>
#include <iomanip>

int main() {

    //input 
    double base_tution, processing_percatage, downpayment_amount, num_monthly_installments;

    std::cout << "Enter the base tuition: ";
    std::cin >> base_tution;

    std::cout << "Enter the processing-fee percentage: ";
    std::cin >> processing_percatage;

    std::cout << "Enter the down-payment amount: ";
    std::cin >> downpayment_amount;

    std::cout << "Enter the number of monthly installments: ";
    std::cin >> num_monthly_installments;

    //processing
    double processing_fee = (processing_percatage / 100) * base_tution;
    double adjusted_tuition = base_tution + processing_fee;
    double remaining_balance = adjusted_tuition - downpayment_amount;
    double monthly_installment = remaining_balance / num_monthly_installments;

    //output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Processing fee: " << processing_fee << std::endl;
    std::cout << "Adjusted tuition: " << adjusted_tuition << std::endl;
    std::cout << "Remaining balance: " << remaining_balance << std::endl;
    std::cout << "Monthly installment: " << monthly_installment << std::endl;

    return 0;
}

