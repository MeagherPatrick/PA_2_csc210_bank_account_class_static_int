#include "BankAccountClass.h"
#include <iomanip>
using namespace std;
int bankAccount::accNum=100;
bankAccount::bankAccount()
{
  nam = "9";
  bal = 0;
  intr = 0;
  theACCnum = accNum++;
}

void  bankAccount::acc_SET()
{
 // string name = "999";
   /* cout << "Please enter a name: ";
    cin.ignore(1000, '\n');
    getline(cin, nam);*/
  //while (nam == "")
  //{
    cout << "Please enter a name: \n";
    cin.ignore(1000, '\n');
    getline(cin, nam);
    cin.clear();
  /*  name = nam;
    cout << '\n' << "you entered: " << nam;
     if (name == " ") 
     {
      cin.ignore(1000, '\n');
      cout << " \nName can NOT be left   ! \n ";
     }
    } */
  cout << '\n' << "Please enter the initial  deposit: ";
  cin >> bal;
  cout << '\n' << "Please enter the interest rate as a percent: ";
  cin >> intr;
  intr *= 100;
  cout << '\n';
/*  theACCnum = get_accNum(accNum);*/  
  //cout << "intrest is: %" << intr<< '\n';
 // return accNum;
}

 

  void bankAccount::acc_Prt()
{
  if (nam != "9")
  cout << "name is: " << nam <<fixed<< setprecision(2)<<" Bal is: $" << bal << " interest  is: %" << intr
       << " account number is:  " << theACCnum << '\n';
}
void bankAccount::acc_DEP(double amt)
{
 /* cout << '\n';
  cout << bal << '\n';*/
  if (amt > 0) {
    cout << '\n';
    cout << bal << '\n';
      bal += amt;
    cout << "after depositing: " << amt << "the balance is now: " << fixed
         << setprecision(2) << bal
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
         << "the balance is now: " << fixed << setprecision(2) << bal << '\n';
  }
  else cout << "error can not withdraw more than current balance: \n"
         << "current balance is: " << fixed << setprecision(2) << bal <<'\n';
}
void bankAccount::acc_UPd()
{
   
  /*  cout << '\n' << "balance at the start of acc_UPd";
  cout << bal << '\n';*/
  char ans = ' ';
  double amt=0;
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

  //double bankAccount::get_Bal()
  //{
  //  return bal;
  //}

  /*void bankAccount::set_name(string name)
  {
    nam = name; 
  }*/

  //string bankAccount::get_name(string name)
  //{
  //  nam = name;
  //  return nam;
  //}
  
//void bankAccount::set_accNum()
//{
//  //accNum++;
//}


  /*double bankAccount::set_interest(double percent)
  {
    percent *= 100;
    return percent;
  }*/
//int bankAccount::get_accNum(int an)
//{
//  an = accNum;
//  return ++an;
//}
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