#include <ExcecaoCpf.hpp>

ExcecaoCpf::ExcecaoCpf(){
    _erro="Cpf inválido.";
}

const char* ExcecaoCpf::what() const noexcept{
  return _erro.c_str();
}