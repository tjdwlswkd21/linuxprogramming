#ifndef _POWER_H_
#define _POWER_H_

class Power {
    int k, p;
public:
    Power();
    Power(int a, int b);
    void print();
    Power operator-(int a);
};

#endif


