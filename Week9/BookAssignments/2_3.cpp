#include <iostream>

enum Operator {Add, Subtract, Multiply, Divide};

class Calculator
{
private:
    Operator myOperator;
public:
    Calculator(Operator opp);

    int calculate(int num1, int num2);

    Operator getopp(){
        return myOperator;
    }
};

Calculator::Calculator(Operator opp):myOperator(opp) { }

int Calculator::calculate(int num1, int num2){
    switch (getopp())
    {
    case Operator::Add: {
        return num1 + num2;
    }
    case Operator::Subtract: {
        return num1 - num2;
    }
    case Operator::Multiply: {
        return num1 * num2;
    }
    case Operator::Divide: {
        return num1 / num2;
    }
        break;
    
    default: {
        std::cout << "This doesn't work." << std::endl;
    }
        break;
    }
}

int main(){
    int numb1;
    int numb2;
    Calculator cal1 = ( Operator::Add );
    Calculator cal2 = ( Operator::Subtract );
    Calculator cal3 = ( Operator::Multiply );
    Calculator cal4 = ( Operator::Divide );
    std::cout << "Enter a number: ";
    std::cin >> numb1;
    std::cout << "Enter a second number: ";
    std::cin >> numb2;

    std::cout << "Here are four different equations using your selected numbers:\nAddition: " << cal1.calculate(numb1, numb2) << "\nSubtraction: " << cal2.calculate(numb1, numb2) << 
    "\nMultiplication: " << cal3.calculate(numb1, numb2) << "\nDivision: " << cal4.calculate(numb1, numb2) << std::endl;
}
