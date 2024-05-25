#include <iostream>
#include <iomanip>

using namespace std;

class Currency {
private:
    double npr, usd, euro;

public:
    void setNpr(double amount)
    {
        npr = amount;
    }

    void setUsd(double amount)
    {
        usd = amount;
    }

    void setEuro(double amount)
    {
        euro = amount;
    }


    double NprToUsd()
    {
        const double x = 0.0075;
        return npr * x;
    }

    double NprToEuro()
    {
        const double y = 0.0069;
        return npr * y;
    }

    double UsdToEuro()
    {
        const double a = 0.092;
        return usd * a;
    }

    double UsdToNpr()
    {
        const double b = 132.89;
        return usd * b;
    }

    double EuroToNpr()
    {
        const double p = 144.23;
        return euro * p;
    }

    double EuroToUsd()
    {
        const double q = 1.09;
        return euro * q;
    }
};


void npr()
{
    Currency npr;
    int choice;
    double amount;
    cout << "You can convert your money from NPR to USD and Euro.\n\n";

    cout << "Enter the amount in NPR: ";
    cin >> amount;

    while (amount <= 0) {
        cout << "Invalid amount. Please enter a positive value: ";
        cin >> amount;
    }

    cout << "\nSelect the currency you want to convert to:\n";
    cout << "1. US Dollar (USD)\n";
    cout << "2. Euro (EUR)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    npr.setNpr(amount);
    switch (choice) {
        case 1:
            {
            double usd_equivalent = npr.NprToUsd();
            cout << fixed << setprecision(2);
            cout << amount << " NPR is equivalent to " << usd_equivalent << " USD.\n";
            break;
            }
        case 2:
            {
            double euro_equivalent = npr.NprToEuro();
            cout << fixed << setprecision(2);
            cout << amount << " NPR is equivalent to " << euro_equivalent << " EUR.\n";
            break;
            }
        default:
            cout << "Invalid choice.\n";
    }

}

void usd()
{
    Currency usd;
    int choice;
    double amount;
    cout << "You can convert your money from USD to NPR and Euro.\n\n";

    cout << "Enter the amount in USD: ";
    cin >> amount;

    while (amount <= 0) {
        cout << "Invalid amount. Please enter a positive value: ";
        cin >> amount;
    }

    cout << "\nSelect the currency you want to convert to:\n";
    cout << "1. Nepalese Rupees (NPR)\n";
    cout << "2. Euro (EUR)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    usd.setUsd(amount);

    switch (choice) {
        case 1:
            {
            double npr_equivalent = usd.UsdToNpr();
            cout << fixed << setprecision(3);
            cout << amount << " USD is equivalent to " << npr_equivalent << " NPR.\n";
            break;
            }
        case 2:
            {
            double euro_equivalent = usd.UsdToEuro();
            cout << fixed << setprecision(3);
            cout << amount << " USD is equivalent to " << euro_equivalent << " EUR.\n";
            break;
            }
        default:
            cout << "Invalid choice.\n";
    }

}

void euro()
{
    Currency euro;
    int choice;
    double amount;
    cout << "You can convert your money from EURO to NPR and USD.\n\n";

    cout << "Enter the amount in EURO: ";
    cin >> amount;

    while (amount <= 0) {
        cout << "Invalid amount. Please enter a positive value: ";
        cin >> amount;
    }

    cout << "\nSelect the currency you want to convert to:\n";
    cout << "1. Nepalese Rupees (NPR)\n";
    cout << "2. US Dollar (USD)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    euro.setEuro(amount);

    switch (choice) {
        case 1:
            {
            double npr_equivalent = euro.EuroToNpr();
            cout << fixed << setprecision(3);
            cout << amount << " Euro is equivalent to " << npr_equivalent << " NPR.\n";
            break;
            }
        case 2:
            {
            double usd_equivalent = euro.EuroToUsd();
            cout << fixed << setprecision(3);
            cout << amount << " Euro is equivalent to " << usd_equivalent << " USD.\n";
            break;
            }
        default:
            cout << "Invalid choice.\n";
    }

}


int main() {

    int a;
    cout << "**************************************************************************\n";
    cout << "******************* WELCOME TO THE CURRENCY CONVERTER *******************\n";
    cout << "**************************************************************************\n\n";
    cout << "\n Select your input:\n";
    cout << "1. Nepalese Rupees (NPR)\n";
    cout << "2. Euro (EUR)\n";
    cout << "3. US Dollar (USD)\n\n\n";
    cin >> a;
    switch (a)
    {

        case 1:
            {
                npr();
                break;
            }
        case 2:
            {
                euro();
                break;
            }
        case 3:
            {
                usd();
                break;
            }
        default:
            cout << "Invalid choice.\n";
    }
    return 0;
}
