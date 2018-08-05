#pragma once

class ChocolateBoiler
{
public:
  // Delete the copy constructor and the assignment operator
  // or the singleton can be copied!
  ChocolateBoiler(ChocolateBoiler const&) = delete;
  void operator=(ChocolateBoiler const&)  = delete;

  virtual ~ChocolateBoiler();

  // Get-Method for singleton object
  static ChocolateBoiler& getInstance();

  void fill();
  void drain();
  void boil();

  bool isEmpty() const;
  bool isBoiled() const;

private:
  // Private constructor
  ChocolateBoiler();

  bool boilerEmpty;
  bool contentBoiled;
};
