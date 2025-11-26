#include <iostream>
#include <string>

int main() {

    //task 1
    std::string name;
    int age;
    std::string city;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cin.get();
    std::cout << "Enter your city: ";
    std::getline(std::cin, city);
    std::cout << "Hello, " << name << "! You are " << age << " years old and live in " << city << "." << std::endl;


    //task 2
    double num1, num2 ;
    std::cout << "Enter first number: ";
    std::cin >> num1 ;
    std::cout << "Enter second number: ";
    std::cin >> num2 ;
    double sum = num1 + num2 ;
    double difference = num1 - num2 ;
    double average = sum / 2.0 ;
    std::cout << "Sum: " << sum << std::endl ;
    std::cout << "Difference: " << difference << std::endl ;
    std::cout << "Average: " << average << std::endl ;


    //task 3
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::cout << "Hexadecimal: " << std::hex << num << std::endl;
    std::cout << "Octal: " << std::oct << num << std::endl;


    //task 4
    char char1;
    std::cout << "Enter a character: ";
    std::cin >> char1;
    int asciiValue = static_cast<int>(char1);
    std::cout<< asciiValue << std::endl;


    int num3 ;
    std::cout << "enter num3" ;
    std::cin >> num3;
    if(num3%2==0) std::cout << "even" ;
    else std::cout << "odd" ;

    return 0;
}
