#ifndef CALCULATOR
#define CALCULATOR

#include <cmath>

class Calculator
{
  double m_times;
public:
  Calculator(double times) : m_times(times)
  {
  }

  double calculate(double x) const
  {
    return pow(x, m_times);
  }
};

#endif