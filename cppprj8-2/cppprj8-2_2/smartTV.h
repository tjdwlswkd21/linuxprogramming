#ifndef _SmartTV_H_
#define _SmartTV_H_
#include <string>
using namespace std;

class TV {
    int size;
public:
    TV(int a = 5);  
    void set_p(int a);
    int print_p();
};

class WideTV: public TV {
    bool video;
public:
    WideTV(int a, bool b = true);
    void set_v(bool a);
    bool print_v();
};

class SmartTV: public WideTV {
    string ip_num;
public:
    SmartTV();
    SmartTV(int a, bool b, string = "000.0.0.0");
    void set_ip(string a);
    string print_ip();
    void setSmartTV(int a, bool b, string);
};

#endif


