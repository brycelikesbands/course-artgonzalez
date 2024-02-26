//write include statements
#include "decisions.h"
#include <iostream>
#include <limits> 

int main() 
{
    int grade;
    std::cout << "Enter numerical grade: ";
    std::cin >> grade;

    std::cout << "Letter grade using if: " << get_letter_grade_using_if(grade) << std::endl;
    std::cout << "Letter grade using switch: " << get_letter_grade_using_switch(grade) << std::endl;
	return 0;
}



int main() {
    int option;
    int grade;

    std::cout << "MAIN MENU\n";
    std::cout << "1-Letter grade using if\n";
    std::cout << "2-Letter grade using switch\n";
    std::cout << "3-Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> option;

    switch (option) {
        case 1:
            std::cout << "Enter numerical grade: ";
            std::cin >> grade;
            if (grade >= 0 && grade <= 100)
                std::cout << "Letter grade using if: " << get_letter_grade_using_if(grade) << std::endl;
            else
                std::cout << "Number is out of range.\n";
            break;
        case 2:
            std::cout << "Enter numerical grade: ";
            std::cin >> grade;
            if (grade >= 0 && grade <= 100)
                std::cout << "Letter grade using switch: " << get_letter_grade_using_switch(grade) << std::endl;
            else
                std::cout << "Number is out of range.\n";
            break;
        case 3:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid option.\n";
            break;
    }

    return 0;
}