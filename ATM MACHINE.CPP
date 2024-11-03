#include<iostream>
using namespace std;

void showMenu()
{
    cout << "******* MENU *******" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Amount" << endl;
    cout << "3. Withdraw Amount" << endl;
    cout << "4. Transfer" << endl;
    cout << "5. Logout" << endl;
}

int main()
{
    int option;
    double balance = 110000;

    do
    {
        showMenu();
        cout << "Choose an option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Your Balance is " << balance << " tk." << endl;
            break;

        case 2:
            {
                double depositAmount;
                cout << "Deposit Amount: ";
                cin >> depositAmount;
                balance += depositAmount;
                cout << "Amount deposited successfully!" << endl;
            }
            break;

        case 3:
            {
                double withdrawAmount;
                cout << "Withdraw Amount: ";
                cin >> withdrawAmount;
                if (withdrawAmount <= balance)
                {
                    balance -= withdrawAmount;
                    cout << "Withdrawal successful!" << endl;
                }
                else
                    cout << "Not enough money" << endl;
            }
            break;

        case 4:
            {
                double transferAccountNo, transferAmount;
                int userPin = 8080, pin;

                cout << "Transfer Account No: ";
                cin >> transferAccountNo;
                cout << "Transfer Amount: ";
                cin >> transferAmount;

                if (transferAmount > balance)
                {
                    cout << "Not enough money to transfer" << endl;
                    break;
                }

                cout << "Please enter the pin: ";
                cin >> pin;

                if (pin == userPin)
                {
                    balance -= transferAmount;
                    cout << "Amount has been transferred successfully!" << endl;
                }
                else
                {
                    cout << "Incorrect PIN" << endl;
                }
            }
            break;

        default:
            if (option != 5)
                cout << "Invalid option, please try again." << endl;
            break;
        }

    } while (option != 5);

    cout << "Logging out..." << endl;
    return 0;
}


