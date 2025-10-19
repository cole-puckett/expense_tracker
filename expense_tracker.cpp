#include <iostream>
#include <print>
#include <string>
#include <vector>

// create a transaction list struct (to store multiple variables)
struct Transaction{
    std::string description{};
    double amount{};
    bool isRevenue{};
};


void PrintMenu(int &);
void AddTransaction(std::vector<Transaction> &transactions);
/*void ViewBalance();
void ViewTransactions();
void DeleteTransaction();
*/


int main(){
    
    // print greeting message 
    std::println("Welcome to the Expense Tracker!");
    int choice{};
    
    // print menu options with a loop
    // use if statements to handle user choices - named function for each option
    
    // create transaction vector (to store multiple transactions) 
    std::vector<Transaction> transactions;
    
    do { PrintMenu(choice);
        if (choice == 1){
           AddTransaction(transactions);
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
            std::cout << "\n";
            std::println("Exiting, goodbye!");
            std::cout << "\n";
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

void AddTransaction(std::vector<Transaction> &transactions){

    // get transaction information and store it in a Transaction struct
    Transaction t;
    char type{};

    std::print("Enter transaction Description: ");
    std::cin.ignore(100, ' ');
    std::getline(std::cin, t.description);
    std::print("Is this a revenue or expense?: (R or E): ");
    std::cin >> type;

    while ( type != 'R' && type != 'E' && type != 'e' && type != 'r'){
            std::cout << "\n";
            std::print("Invalid input: please enter R for revenue or E for expense: ");
            std::cin >> type;
    }   
    
    if ( type == 'R' || type == 'r'){
        t.isRevenue = true;
    } else {
        t.isRevenue = false;
    }

    std::print("Enter transaction amount: ");
    std::cin >> t.amount;

    // add transaction information to Transaction vector
   transactions.push_back(t);

   std::println("Transaction added successfully!");
    return;
}


// void ViewBalance(std::vector<Transaction> &transactions){



 //   return;
// }


void ViewTransactions(std::vector<Transaction> &transactions){

    for ( int count{}; count < t; ++count){
        std::print("Transaction {}: {}, {} of {}", count, t.description, if ( t.type == true ){"Revenue"} else {"Expense"}, t.);
    }


    return;
}
// void DeleteTransaction()

