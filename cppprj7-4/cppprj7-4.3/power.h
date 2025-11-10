#ifndef _POWER_H_
#define _POWER_H_

class Power {
    int k, p;
public:
    Power();
    Power(int a, int b);
    void print();
    friend Power operator*(const Power& a, int b);
};

Power operator*(int a, const Power& b);

#endif


