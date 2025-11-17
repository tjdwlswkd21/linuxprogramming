#include "smartTV.h"
#include <iostream>
using namespace std;

int main() {
SmartTV htv;
htv.setSmartTV(50, false, "192.0.0.2");
cout << "size =" << htv.print_p() << endl;
cout << "videoIn =" << boolalpha << htv.print_v() << endl;
cout << "IP ="<< htv.print_ip() << endl;
}

