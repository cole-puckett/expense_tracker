#include <iostream>
#include <print>

void PrintMenu(int &);
/*void AddTransaction();
void ViewBalance();
void ViewTransactions();
void DeleteTransaction();
*/


int main(){
    
    // print greeting message 
    std::println("Welcome to the Expense Tracker!");
    int choice{};
    
    // print menu options with a loop
    // use if statements to handle user choices - named function for each option
    do { PrintMenu(choice);
        if (choice == 1){
           // AddTransaction();
           std::cout << "\n";
        }
        else if (choice ==2){
           // ViewBalance();
           std::cout << "\n";
        } else if (choice == 3){
            // ViewTransactions();
           std::cout << "\n";
        } else if (choice == 4){
            // DeleteTransaction();
            std::cout << "\n";
        } else {
            std::println("Thank you, goodbye!");
        }
    }
    while ( choice != 5);

    
    
    
    return 0;
}

void PrintMenu(int &choice) {
    std::println("Expense Tracker Menu:");
    
    // add transaction
    std::println("1. Add Transaction");
    
    // view balance
    std::println("2. View Balance");
    
    // view transactions
    std::println("3. View Transactions");
    
    // delete transaction
    std::println("4. Delete Transaction");
    
    // exit program
    std::println("5. Exit");
    std::print("Please enter your choice (1-5): ");
    
    // get user input
    std::cin >> choice;
    while ( ! (choice >= 1 && choice <= 5)){
        std::cout << "\n";
        std::println("Invalid choice: please enter a valid option.");
        std::print("Enter your choice (1-5): ");
        std::cin >> choice;
    }
    return;
}
/*
void AddTransaction(){



    return;
}
void ViewBalance()
void ViewTransactions()
void DeleteTransaction()

*/