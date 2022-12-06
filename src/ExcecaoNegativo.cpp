#include <ExcecaoNegativo.hpp>

ExcecaoNegativo::ExcecaoNegativo(){
    _erro="Impossível realizar operações com valores negativos";
}

const char* ExcecaoNegativo::what() const noexcept{
  return _erro.c_str();
}