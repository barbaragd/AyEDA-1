#pragma once
#include <exception>
#include <iostream>

class number_t_exception_t : public std::exception
{
};

class overflow_set_exception : public number_t_exception_t
{
public:
  virtual const char *what(void) const throw()
  {
    return "\nSe ha producido overflow en la operación.\n";
  }
};

class underflow_set_exception : public number_t_exception_t
{
public:
  virtual const char *what(void) const throw()
  {
    return "\nSe ha producido underflow en la operación.\n";
  }
};

class wrong_number_exception : public number_t_exception_t
{
public:
  virtual const char *what(void) const throw()
  {
    return "\nLos valores tienen que ser mayores que 1.\n";
  }
};