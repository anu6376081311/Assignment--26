#include<iostream>
using namespace std;
class Bank {
private:
    double principal;
    double rate;
    int year;

public:
    // Constructor to initialize the object
    Bank(double p, double r, int y) : principal(p), rate(r), year(y) {}

    // Read the principal amount
    void readPrincipal() {
        std::cout << "Enter principal amount: ";
        std::cin >> principal;
    }

    // Read the rate of interest
    void readRate() {
        std::cout << "Enter rate of interest: ";
        std::cin >> rate;
    }

    // Read the number of years
    void readYear() {
        std::cout << "Enter number of years: ";
        std::cin >> year;
    }

    // Calculate and display the simple interest
    void displayInterest() {
        double interest = (principal * rate * year) / 100;
        std::cout << "Simple interest is: " << interest << std::endl;
    }
};


int main()
{
    // Create a Bank object with initial values
Bank bank(1000, 5, 2);

// Read principal, rate of interest, and number of years from the user
bank.readPrincipal();
bank.readRate();
bank.readYear();

// Calculate and display the simple interest
bank.displayInterest();

}