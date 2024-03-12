#include<conio.h>
#include<bits/stdc++.h> using namespace std;
class atm{ private:
long int account_No; string name;
int PIN;
double balance; string mobile_No;
public:
void setData(long int account_No_a, string name_a, int
PIN_a, double balance_a, string mobile_No_a){ account_No = account_No_a;
name = name_a;
PIN = PIN_a;
balance = balance_a; mobile_No = mobile_No_a;
}
 
 long int getAccountNo(){ return account_No;
}
string getName(){ return name;
}
int getPIN(){ return PIN;
}
double getBalance(){ return balance;
}
string getMobileNo(){ return mobile_No;
}
void setMobile(string mob_prev, string mob_new){

 Cash"<<endl;
if (mob_prev == mobile_No){
mobile_No = mob_new;
cout << endl << "Sucessfully Updated Mobile
no.";
screen ( untill user press any key )
_getch(); //getch is to hold the
}
else{
cout << endl << "Incorrect !!! Old Mobile no"; _getch();
} }
void cashWithDraw(int amount_a){
if (amount_a > 0 && amount_a < balance){
balance -= amount_a;
cout << endl << "Please Collect Your

 balance;
cout << endl << "Available Balance :" <<
_getch(); }
else{
cout << endl << "Invalid Input or Insufficient
Balance";
_getch();
} }
void moneyDebit(int amount_a){
if (amount_a > 0 && amount_a < balance){
balance -= amount_a;
cout << endl << "Money Transfered successfully !"<<endl;
cout << endl << "Your account has a debit by transfer of "<<amount_a<<endl;
balance;
}
cout << endl << "Available Balance :" <<
_getch();

 else{
cout << endl << "Invalid Input or Insufficient
Balance";
_getch();
} }
void moneyCredit(string to ,int amount_a){ balance += amount_a;
cout << endl << to<<"'s account has been credited with amount "<<amount_a<<endl;
cout << endl << "Available Balance :" <<
balance;
_getch(); }
};
////////////////////////////////////////////////////////////////////////////////////////// ///
int main(){
vector<atm> v;
int choice = 0, enterPIN,index,x,y;

 string username,whom;
char c,d;
long int enterAccountNo;
system("cls");
atm user1;
user1.setData(1010101, "Omprakash", 1111, 45000.90, "9087654321");
v.push_back(user1); atm user2;
user2.setData(2020202, "Uday", 2222, 42000.00, "9178417414");
v.push_back(user2); atm user3;
user3.setData(3030303, "Aditya", 3333, 52000.75, "8219695149");
v.push_back(user3); atm user4;
user4.setData(4040404, "Simran", 4444, 50000.50, "8859828782");
v.push_back(user4);

 do{
system("cls");
cout << endl << "Welcome to ATM*" <<endl; cout << endl << "Enter Your User name ";
cin >> username;
c=username[4];
x=c - 48 ;
cout << endl << "Enter Your Account number ";
cin >> enterAccountNo;
cout << endl << "Enter PIN "; cin >> enterPIN;
if ((enterAccountNo == v[x-1].getAccountNo()) && (enterPIN == v[x-1].getPIN())){
<< endl;
do{
int amount = 0;
string oldMobileNo, newMobileNo; system("cls");
cout << endl << "* Welcome to ATM **"
cout << endl << "Select Options "; cout << endl << "1. Check Balance";

 cout << endl << "2. Cash withdraw"; cout << endl << "3. Show User Details"; cout << endl << "4. Update Mobile no."; cout << endl << "5. Transfer Money"; cout << endl << "6. Exit" << endl;
cin >> choice;
switch (choice){
case 1:
cout << endl << "Your current Bank balance is :" << v[x-1].getBalance();
";
_getch();
break; case 2:
cout << endl << "Enter the amount :
cin >> amount; v[x-1].cashWithDraw(amount); break;
case 3:
cout << endl << "* User Details
are :- ";

 cout << endl << "-> Account no : " << v[x-1].getAccountNo();
cout << endl << "-> Name : " << cout << endl << "-> Balance : " << cout << endl << "-> Mobile No. : "
v[x-1].getName(); v[x-1].getBalance();
<< v[x-1].getMobileNo();
No. ";
No. ";
newMobileNo);
_getch();
break; case 4:
cout << endl << "Enter Old Mobile cin >> oldMobileNo;
cout << endl << "Enter New Mobile cin >> newMobileNo; v[x-1].setMobile(oldMobileNo, break;

 case 5:
cout<<endl<<"Enter username
whom you want to transfer money "; cin>>whom;
Data !!!";
d=whom[4]; y=d - 48 ;
cout<<endl<<"Enter the amount : "; cin >> amount; v[x-1].moneyDebit(amount); v[y-1].moneyCredit(whom,amount); break;
case 6: exit(0);
default:
cout << endl << "Enter Valid
}
} while (1);
} else{

cout << endl << "User Details are Invalid !!! ";
_getch(); }
} while (1);
return 0; }
