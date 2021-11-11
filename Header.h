#include <iostream>
#include <string>
using namespace std;
const int MAX = 25;
class bankAccount
{
public:
  bankAccount();
  //bankAccount(static int);
  //string, double, double, static int
  int acc_SET();
  void acc_DEP(double);
  void acc_WIT(double);
  void acc_UPd();
  void acc_Prt();
 
private:
  static int accNum;
    int theACCnum;
  string nam;
  double bal, intr;
} 