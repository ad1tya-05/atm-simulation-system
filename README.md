ATM Management System
Introduction
This project simulates the basic functionalities of an ATM (Automated Teller Machine). It allows users to perform operations such as checking their balance, withdrawing cash, transferring money, updating their mobile number, and viewing account details.

Features:
Check bank balance
Cash withdrawal
Show user details
Update mobile number
Transfer money between accounts
Getting Started
Prerequisites:
A C++ compiler (e.g., GCC)
Basic knowledge of C++ OOP (Object-Oriented Programming)
Running the program:
Copy the provided code into a .cpp file (e.g., atm_system.cpp).
Compile the code using a C++ compiler, for example:
CODE-
  g++ atm_system.cpp -o atm_system
Run the executable:
bash
 code
   ./atm_system
User Information:
Four pre-defined users are available for testing:

Omprakash
Account No: 1010101
PIN: 1111
Balance: 45000.90
Mobile No: 9087654321
Uday
Account No: 2020202
PIN: 2222
Balance: 42000.00
Mobile No: 9178417414
Aditya
Account No: 3030303
PIN: 3333
Balance: 52000.75
Mobile No: 8219695149
Simran
Account No: 4040404
PIN: 4444
Balance: 50000.50
Mobile No: 8859828782
Functionalities
Check Balance:
View the current account balance.

Cash Withdrawal:
Withdraw a specified amount of money (if available balance is sufficient).

Show User Details:
Display the account number, name, balance, and mobile number of the user.

Update Mobile Number:
Update the user's mobile number after verifying the old number.

Transfer Money:
Transfer money to another user by specifying their username and the transfer amount.

How to Use
Login:
Enter the username (first letter capitalized and 4th letter as a digit), account number, and PIN.

Select Option:
After login, select one of the options from the menu.

Perform Transaction:
Follow the on-screen prompts to perform actions like cash withdrawal, updating mobile number, etc.

Exit:
To exit, select option 6.

Notes
Usernames are case-sensitive and depend on the fourth character being a number.
The program uses getch() to pause and wait for a keypress after certain actions, allowing the user to view results before continuing.
The vector v stores all user data, making it easily extendable to add more users.
This README provides basic usage and functionality information for users and developers of the ATM Management System.
