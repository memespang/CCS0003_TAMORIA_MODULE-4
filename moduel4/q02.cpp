#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    //input
    double quiz, lab, project, exam, weightedGrade;

    std::cout << "Enter quiz grade: ";
    std::cin >> quiz;

    std::cout << "Enter lab grade: ";
    std::cin >> lab;

    std::cout << "Enter project grade: ";
    std::cin >> project;

    std::cout << "Enter exam grade: ";
    std::cin >> exam;

    //processing
    weightedGrade = 0.2 * quiz + 0.25 * lab + 0.25 * project + 0.3 * exam;

    //output
    std::cout << "Weighted grade: " << std::fixed << std::setprecision(2) << weightedGrade << std::endl;
    std::cout << "Rounded grade: " << std::fixed << std::setprecision(0) << std::round(weightedGrade) << std::endl;
    std::cout << "Cast to int: " << int(weightedGrade) << std::endl;
    return 0;
}
