#include <iostream>
using namespace std;

int main() {
    double balance, totalCost = 0;
    int units;

    // Prompt the user to input the amount of money loaded onto their account and the number of water units consumed
    cout << "Enter the amount of money loaded onto your account (UGX): ";
    cin >> balance;
    cout << "Enter the number of water units consumed: ";
    cin >> units;

    // Calculate the total cost based on the tiered pricing structure
    if (units <= 10) {
        totalCost = units * 150;
    } else if (units <= 20) {
        totalCost = 10 * 150 + (units - 10) * 175;
    } else {
        totalCost = 10 * 150 + 10 * 175 + (units - 20) * 200;
    }

    // Apply the 15% surcharge
    totalCost *= 1.15;

    // Apply 18% VAT
    totalCost *= 1.18;

    // Check whether the user's balance is sufficient to cover the total cost
    if (balance >= totalCost) {
        balance -= totalCost;
        cout << "Transaction successful!" << endl;
        cout << "Remaining balance: " << balance << " UGX" << endl;
    } else {
        cout << "Error: Insufficient balance." << endl;
        cout << "Remaining balance before usage: " << balance << " UGX" << endl;
    }

    return 0;
}

