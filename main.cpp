#include <iostream>
#include <clocale>
#include "D3.h"

//*********************************************************************************//тут у всі класи
    B1::B1(const std::string& val) : nameB1(val) {}
    void B1::show() const { std::cout << "B1: " << nameB1 << "\n"; }

    B2::B2(const std::string& val) : nameB2(val) {}
    void B2::show() const { std::cout << "B2: " << nameB2 << "\n"; }

    B3::B3(const std::string& val) : nameB3(val) {}
    void B3::show() const { std::cout << "B3: " << nameB3 << "\n"; }

//*********************************************************************************//
    D1::D1(const std::string& b1, const std::string& b2, const std::string& d1)
        : B1(b1), B2(b2), nameD1(d1) {}

    void D1::show() const {
        B1::show(); B2::show();
        std::cout << "D1: " << nameD1 << "\n";
    }

//*********************************************************************************//
    D2::D2(const std::string& b1, const std::string& b2, const std::string& d1,
           const std::string& b3, const std::string& d2)
        : D1(b1, b2, d1), B3(b3), nameD2(d2) {}

    void D2::show() const {
        D1::show(); B3::show();
        std::cout << "D2: " << nameD2 << "\n";
    }

//*********************************************************************************//
    D3::D3(const std::string& b1, const std::string& b2, const std::string& d1,
           const std::string& b3, const std::string& d2, const std::string& d3)
        : D2(b1, b2, d1, b3, d2), nameD3(d3) {}

    void D3::show() const {
        D2::show();
        std::cout << "D3: " << nameD3 << "\n";
    }

//*********************************************************************************//
    int main() {
        std::setlocale(LC_ALL, "Uk_UA.UTF-8");
        std::cout << "Ілюстрація роботи ієрархії через клас D3 \n\n";
        D3 objD3("Val_B1", "Val_B2", "Val_D1", "Val_B3", "Val_D2", "Val_D3");
        objD3.show();

        return 0;
};
