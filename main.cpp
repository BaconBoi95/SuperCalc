#include "lib\calculators\basic.cpp"
#include "lib\calculators\gradecalc.cpp"
#include "lib\calculators\statmain.cpp"
int main() {
  int a;
  cout << "[1] Basic Calculator" << endl << "[2] Grade Calculator" << endl << "[3] Statistic Calculator";
  cin >> a;
  if(a==1) {
    basiccalc();
  }
  else if(a==2) {
    grade();
  }
  else if(a==3) {
    statisticalcalc();
  }
};
