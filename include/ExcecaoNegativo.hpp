#include<iostream>
#include<string>
#pragma once


class ExcecaoNegativo:public std::exception{
    private:
    std:: string _erro;
    public:
    ExcecaoNegativo();
    virtual const char* what() const noexcept override;
};