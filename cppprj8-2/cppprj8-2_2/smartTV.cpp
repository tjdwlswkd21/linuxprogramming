#include <iostream>
#include "smartTV.h"
#include <string>
using namespace std;

TV::TV(int a) : size(a) {
    cout << "TV생성" << endl;
}
void TV::set_p(int a) {
    size = a;
}

int TV::print_p() {
    return size;
}

WideTV::WideTV(int a, bool b) : TV(a), video(b) {
    cout << "WideTV생성" << endl;
}

void WideTV::set_v(bool a) {
    video = a;
}

bool WideTV::print_v() {
    return video;
}

SmartTV::SmartTV() : SmartTV::SmartTV(1, true, "000.0.0.0") {}

SmartTV::SmartTV(int a, bool b, string c) : WideTV(a, b), ip_num(c) {
    cout << "SmartTV생성" << endl;
}

void SmartTV::set_ip(string a) {
    ip_num = a;
}

string SmartTV::print_ip() {
    return ip_num;
}

void SmartTV::setSmartTV(int a, bool b, string c) {
    TV::set_p(a);
    WideTV::set_v(b);
    SmartTV::set_ip(c);
}