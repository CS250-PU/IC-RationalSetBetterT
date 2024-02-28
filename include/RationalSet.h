#pragma once

#include <iostream>
#include <fstream>
#include "Rational.h"

using namespace std;

class RationalSet {
  public:
    static const int MAX_RATIONALS = 64;
    RationalSet ();
    int size () const;
    void add (const Rational &rcRational);
    void write (ostream &rcOut) const;

  private:
    Rational macRationals[MAX_RATIONALS];
    int mSize;
};