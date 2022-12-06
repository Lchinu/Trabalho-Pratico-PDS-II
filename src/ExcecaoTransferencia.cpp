#include <ExcecaoTransferencia.hpp>

ExcecaoTransferencia::ExcecaoTransferencia(){
    _erro="Saldo indisponível para transferência.";
}

const char* ExcecaoTransferencia::what() const noexcept{
  return _erro.c_str();
}