#include "transacao.hpp"

Transacao::Transacao(float v, std::string t, std::string a) : valor(v),tipo(t), autor(a){}

std::string Transacao::get_autor(){
    return autor;
}

std::string Transacao::get_tipo(){
    return tipo;
}

float Transacao::get_valor(){
    return valor;
}