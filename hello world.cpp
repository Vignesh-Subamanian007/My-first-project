#include <iostream>

using namespace std;

int main() {
    double basicPay, da, hra, totalPay;

    // Standard percentage allowances (Modify these values based on your needs)
    const double DA_PERCENTAGE = 10.0;  // 10% DA
    const double HRA_PERCENTAGE = 20.0; // 20% HRA

    // Get basic pay input from user
    cout << "Enter Basic Pay: ";
    cin >> basicPay;

    // Calculate DA, HRA, and Total Pay
    da = (DA_PERCENTAGE / 100.0) * basicPay;
    hra = (HRA_PERCENTAGE / 100.0) * basicPay;
    totalPay = basicPay + da + hra;

    // Display the results
    cout << "\n--- Pay Breakdown ---" << endl;
    cout << "Basic Pay : $" << basicPay << endl;
    cout << "DA (" << DA_PERCENTAGE << "%)  : $" << da << endl;
    cout << "HRA (" << HRA_PERCENTAGE << "%) : $" << hra << endl;
    cout << "---------------------" << endl;
    cout << "Total Pay : $" << totalPay << endl;

    return 0;
}
