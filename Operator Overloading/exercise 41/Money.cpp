#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}


//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----
Money operator+(const Money &lhs, const Money &rhs) {
    int totalCents = (lhs.dollars + rhs.dollars) * 100;
    totalCents += (lhs.cents + rhs.cents);
    return Money(totalCents);
}

//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


