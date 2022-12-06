#include <ExcecaoSaque.hpp>

ExcecaoSaque::ExcecaoSaque(){
    _erro="Saldo indisponível para saque.";
}

const char* ExcecaoSaque::what() const noexcept{
  return _erro.c_str();
}