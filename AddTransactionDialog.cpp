#include <regex>
#include <string>
#include <iostream>

class AddTransactionDialog {
public:
    bool validateInput(const std::string& input) {
        // Example regular expression for validation
        std::regex pattern("^\d{1,5}(\.\d{1,2})?$"); // Validates numbers with up to 5 digits and optional 2 decimal places
        return std::regex_match(input, pattern);
    }

    void showDialog() {
        std::string userInput;
        std::cout << "Enter transaction amount: ";
        std::cin >> userInput;

        if (validateInput(userInput)) {
            std::cout << "Valid input!" << std::endl;
        } else {
            std::cout << "Invalid input! Please enter a valid amount." << std::endl;
        }
    }
};