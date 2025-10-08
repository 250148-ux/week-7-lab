#include <iostream>
using namespace std;

/*Problem 5
int main() {
    char moretransitions;
    int balance = 500, deposit, withdraw, action;
    do {
        cout << "1. Deposit\n2. Withdraw\n3. Check balance\n"
        "Please enter what you the action you want to do (1-3): ";
        cin >> action;
        switch (action) {
            case 1: cout << "Enter the amount you want to deposit: ";
                cin >> deposit;
                balance+=deposit;
                break;
            case 2: cout << "Enter the amount you want to withdraw: ";
                cin >> withdraw;
                if (withdraw > balance) {
                    cout << "Insufficient balance!\n";
                } else if (withdraw < balance) {
                    balance-=withdraw;
                } break;
            case 3: cout << "Balance is: $" << balance << endl;
                break;
            default: cout << "Invalid action!\n";
        }

        cout << "Do you wan to continue? (y/n):";
        cin >> moretransitions;
    } while (moretransitions == 'y' || moretransitions == 'Y');

    return 0;
}*/

/*Problem 9
int main() {
    while (true) {
        cout << "Create a password: ";
        string password;
        cin >> password;

        bool digit = false;
        bool upper = false;
        bool lower = false;
        bool special = false;

        for (char c : password) {
            if ('0' <= c && c <= '9') digit = true;
            else if ('A' <= c && c <= 'Z') upper = true;
            else if ('a' <= c && c <= 'z') lower = true;
            else if ('!' <= c && c <= '.' || ':' <=c && '@' <= c) special = true;
        }
        bool strongpassword = true;
        if (password.size() < 8) {
            cout << "Password is too short (must be at least 8 characters)\n";
            strongpassword = false;
        }
        if (!upper) {
            cout << "Password must contain at least one uppercase letter\n";
            strongpassword = false;
        }
        if (!lower) {
            cout << "Password must contain at least one lowercase letter\n";
            strongpassword = false;
        }
        if (!digit) {
            cout << "Password must contain at least one digit\n";
            strongpassword = false;
        }
        if (!special) {
            cout << "Password must contain at least one special letter\n";
            strongpassword = false;
        }
        if (strongpassword == true) {
            cout << "Password is strong!" << endl;
            break;
        }
        cout << "Please try again.\n\n";
    }

    return 0;
}*/

/*Problem 7
void parkfee (int fee) {
    cout << "Parking fee is: " << fee << endl;
}
int main () {
    int hours, fee=0;
    cout << "Enter the hours of parking: ";
    cin >> hours;
    if (hours>=0 && hours<3) {
        fee+=0;
    } else if (hours>=3 && hours<6) {
        fee+=hours*2;
    } else if (hours>=6) {
        fee+=hours*5;
    } else {
        cout << "Please enter a valid hours" << endl;
    }
    parkfee(fee);

    return 0;
}*/

/*Problem 8
int pricecalculator (int&a, int&b, int&c, int&d) {
    return a + b + c + d;
}
int main() {
    int pizza=0, burger=0, hotdog=0, salad=0, choice, quantity;
    char moreordering;
    do {
        cout << "1. Pizza - price $15\n2. Burger - price $8\n3. Hot Dog - price $7\n4. Salad - price $5"
        "\nPlease enter which one you want to order (1-4): ";
        cin >> choice;
        cout << "Now enter the quantity of selected food: ";
        cin >> quantity;
        switch (choice) {
            case 1: pizza+=15*quantity;
                cout << "You booked " << quantity << " Pizza(s)\n";
                break;
            case 2: burger=8*quantity;
                cout << "You booked " << quantity << " Burger(s)\n";
                break;
            case 3: hotdog+=7*quantity;
                cout << "You booked " << quantity << " Hot Dog(s)\n";
                break;
            case 4: salad+=5*quantity;
                cout << "You booked " << quantity << " Salad(s)\n";
                break;
            default: cout << "Invalid choice\n";
        }
        cout << "\nDo you want to order anything else? (y/n)?: ";
        cin >> moreordering;

    } while (moreordering == 'y' || moreordering == 'Y');
    int total = pricecalculator(pizza, burger, hotdog, salad);
    cout << "Total price is " << total << endl;

    return 0;
}*/

/*Problem 6
int pricecalculator (int&a, int&b, int&c) {
    return a + b + c;
}
int main() {
    int movA=0, movB=0, movC=0, choice, quantity;
    char morebooking;
    do {
        cout << "1. Movie A - price $8\n2. Movie B - price $10\n3. Movie C - price $12\n"
        "Please enter which movie you want to buy tickets for (1-3): ";
        cin >> choice;
        cout << "Now enter the quantity of tickets you want to buy: ";
        cin >> quantity;
        switch (choice) {
            case 1: movA+=8*quantity;
                cout << "You booked " << quantity << " ticket(s) for Movie A\n";
                break;
            case 2: movB+=10*quantity;
                cout << "You booked " << quantity << " ticket(s) for Movie B\n";
                break;
            case 3: movC+=12*quantity;
                cout << "You booked " << quantity << " ticket(s) for Movie C\n";
                break;
            default: cout << "Invalid choice\n";
        }
        cout << "\nDo you want to book more movie ticket(s)? (y/n)?: ";
        cin >> morebooking;

    } while (morebooking == 'y' || morebooking == 'Y');
    int total = pricecalculator(movA, movB, movC);
    cout << "Total price is $" << total << endl;

    return 0;
}*/