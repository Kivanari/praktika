#ifndef CODE_H
#define CODE_H

class Type1Equation {
public:
    void show();
    void get_answer();
};

class Type2Equation {
private:
    double a;
public:
    Type2Equation(double a1);
    void show();
    void get_answer();
};

#endif