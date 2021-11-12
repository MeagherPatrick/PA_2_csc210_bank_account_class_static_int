/*Bank Account*/




#include "BankAccountClass.h"
const int SIZE = 20;
int main(){
  char ans ='q';
  double balance=0;
  //double intrest=0;
  //double amt =100;
  int acc;
  bankAccount test[SIZE];
  do {
        static int newACC=0;
    cout << "Enter a to add a new customer's data." << '\n'
         << "Enter b to edit customer data." << '\n'
         << "Enter c to print all customer data." << '\n'
         << "Enter q to exit the program." << '\n';
    cin >> ans;

    switch (ans) {
      case 'a':
      case 'A':
        test[newACC].acc_SET();   
        newACC++;
         break;
      case 'b':
      case 'B':
        for (int i = 0; i < SIZE; i++)
          test[i].acc_Prt();
        cout << "Please enter the account num you would to edit: \n  ";      
        cin >> acc;
        balance = test[0].get_Bal();
        cout << "balance before update is: " << balance;
       
        
            test[acc].acc_UPd();
        break;
      case 'c':
      case 'C':
        for (int i = 0; i < SIZE; i++)
          test[i].acc_Prt();
        break;
      case 'q':
      case 'Q':
       return 0;
        break;
    }
  } while (ans != 'q');
  return 0;
  }

 // for (int i = 0; i < SIZE; i++)
   // test[i].acc_Prt();
  /*test[0].acc_DEP(amt);
  test[0].acc_Prt();
  amt = 0.4;
  test[0].acc_WIT(amt);*/