#include <iostream>
using namespace std;




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