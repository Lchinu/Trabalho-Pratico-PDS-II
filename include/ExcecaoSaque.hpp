#include<iostream>
#include<string>
#pragma once


class ExcecaoSaque:public std::exception{
    private:
    std:: string _erro;
    public:
    ExcecaoSaque();
    virtual const char* what() const noexcept override;
};