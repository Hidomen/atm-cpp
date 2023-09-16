#include <iostream>

double balance = 0;

void showBalance();
void depositMoney();
void withdrawMoney();
void choice();
void inputfix();

int main(){
    choice();
    
    return 0;
}

void choice(){
    int option;
    do{
        std::cout << "************* ATM *************\n";
        std::cout << "1. Show Balance\n" << "2. Deposit Money\n" << "3. Withdraw Money\n" << "4. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> option;
        inputfix();

        switch(option){
            case 1:
                std::cout << "-------------------------------\n";
                showBalance();
            break;
            case 2:
                std::cout << "-------------------------------\n";
                depositMoney();
                showBalance();
            break;
            case 3:
                std::cout << "-------------------------------\n";
                withdrawMoney();
                showBalance();
            break;
            case 4:
                std::cout << "-------------------------------\n";
                std::cout << "Exitting the system\n";
                
            break;
            default:
                std::cout << "-------------------------------\n";
                std::cout << "Invalid option.\n";
            break;
        }


    } while(option !=4);

    std::cout << "*******************************\n";
}
void inputfix(){
    std::cin.clear();
    fflush(stdin);
}
void showBalance(){
    std::cout << "Your balance is $" << balance << '\n';
}
void depositMoney(){
    double amount;
    std::cout << "Type amount of money you shall give\n";
    std::cin >> amount;
    inputfix();

    if(amount >= 0){
    balance = balance + amount;
    } else {
        std::cout << "-------------------------------\n";
        std::cout << "Invalid amount\n";
        depositMoney();
    }
}
void withdrawMoney(){
    double amount;
    std::cout << "Type amount of money you shall get\n";
    std::cin >> amount;
    inputfix();

    if (amount > balance){
        std::cout << "-------------------------------\n";
        std::cout << "Insufficient balance\n";
        withdrawMoney();
    }
    else if(amount >= 0){
    balance = balance - amount;
    } else {
        std::cout << "-------------------------------\n";
        std::cout << "Invalid amount\n";
        withdrawMoney();
    }
}