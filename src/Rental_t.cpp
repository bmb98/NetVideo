/*
  Rental_t.cpp

  Test program for class Rental
*/

#include <cassert>

#include "Rental.hpp"

int main() {

  {
    Video movie("A", Video::REGULAR);
    Rental rental(movie, 2);
    assert(rental.getDaysRented() == 2);

  }

    return 0;
}
