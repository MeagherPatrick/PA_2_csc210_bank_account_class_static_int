#include "Header.h"
using namespace std;
int bankAccount::accNum=0;
bankAccount::bankAccount()
{
  nam = "";
  bal = 0;
  intr = 0;
  theACCnum=accNum++;
}

int  bankAccount::acc_SET()
  {   
   cout << "Please enter a name: ";
   cin.ignore(1000,'\n');   
   getline(cin,nam);  
  cout << '\n' << "Please enter the initail deposit: ";
  cin >> bal;
  cout << '\n' << "PLease enter the interest rate: ";
  cin >> intr;
  cout << '\n';

  return accNum;
  
}
void bankAccount::acc_Prt()
{
  if (nam != "")
  cout << "name is: " << nam << " Bal is: $" << bal << " intrest is: a" << intr
       << " account number is:  " << theACCnum << '\n';
}
void bankAccount::acc_DEP(double amt)
{
  if (amt > 0) {
    bal += amt;
    cout << "after deposting: " << amt << "the balance is now: " << bal
         << '\n';
  } 
  else
    cout << "Error can not deposit a negative amount: \n" << '\n';
}
void bankAccount::acc_WIT(double amt)
{
  if (amt < bal) {
    bal -= amt;
    cout << "after Withdrawing: " << amt << '\n'
         << "the balance is now: " << bal << '\n';
  } else
    cout << "error can not withdraw more than current balance: \n"
         << "current balance is: " << bal << '\n';
  }
void bankAccount::acc_UPd()
{
  char ans = ' ';
  double amt;
  while (ans != 'q') 
  {

    cout << "Enter a to make a deposit." << '\n'
         << "Enter b to withdraw." << '\n'
         << "Enter c to check balance." << '\n'
         << "Enter q to exit the program." << '\n';
    cin >> ans;
    switch (ans) {
      case 'a':
      case 'A':
        cout << "Enter the amount you would like to Deposit: \n";
        cin >> amt;
        acc_DEP(amt);

        break;
      case 'b':
      case 'B':
        cout << "Enter the amount you would like to Withdraw: \n";
        cin >> amt;
        acc_WIT(amt);
        break;
      case 'c':
      case 'C':
        cout << "The current balance is: $" << bal << '\n';

        break;
      case 'q':
      case 'Q':
        exit(0);
        break;
    }
  }
}

  
 /* cout << "PLease enter the name you would like to replace " << nam
       << " with: " << '\n';
  cin >> nam;
  cout << "PLease enter bal you would like to replace " << bal
       << " with: " << '\n';
  cin >> bal;
  cout << "PLease enter the name you would like to replace " << intr
       << " with: " << '\n';
  cin >> intr;
  cout << accNum << " has been updated to: " << '\n';
  acc_Prt();*/
////bankAccount::~bankAccount()
//{
//  accNum--;
//}