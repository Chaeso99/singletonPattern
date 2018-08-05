#include "ChocolateBoiler.h"
#include <iostream>

ChocolateBoiler::ChocolateBoiler()
{
  std::cout << "Creating singleton object!" << std::endl;

  boilerEmpty = true;
  contentBoiled = false;
}

ChocolateBoiler::~ChocolateBoiler()
{
}

void ChocolateBoiler::fill()
{
  if (isEmpty())
  {
    boilerEmpty = false;
    contentBoiled = false;

    // fill the boiler with a milk/chocolate mixture
  }
}

void ChocolateBoiler::drain()
{
  if (isEmpty() && isBoiled())
  {
    // drain the boiled milk and chocolate

    boilerEmpty = true;
  }
}

void ChocolateBoiler::boil()
{
  if (!isEmpty() && !isBoiled())
  {
    // bring the contents to a boil

    contentBoiled = true;
  }
}

bool ChocolateBoiler::isEmpty() const
{
  return boilerEmpty;
}

bool ChocolateBoiler::isBoiled() const
{
  return contentBoiled;
}

ChocolateBoiler& ChocolateBoiler::getInstance()
{
  // Note: This so called "lazy initialization" (Meyers' Singleton)
  // is thread-safe since C++11 and GCC 4.3!

  // Singleton object
  static ChocolateBoiler uniqueInstance;

  return uniqueInstance;
}
