//write include statements
#include "decisions.h"
#include <iostream>

int main() 
{
    int grade;
    std::cout << "Enter numerical grade: ";
    std::cin >> grade;

    std::cout << "Letter grade using if: " << get_letter_grade_using_if(grade) << std::endl;
    std::cout << "Letter grade using switch: " << get_letter_grade_using_switch(grade) << std::endl;
	return 0;
}