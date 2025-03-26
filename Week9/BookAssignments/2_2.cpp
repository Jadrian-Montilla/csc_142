#include <iostream>

enum Operator {Add, Subtract, Multiply, Divide};

class Calculator
{
private:
    Operator myOperator;
public:
    Calculator(Operator opp){
        myOperator = opp;
    }
};


