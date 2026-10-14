//
// Created by Евгения on 14.10.2026.
//

#ifndef INC_14_10_2026_D3_H
#define INC_14_10_2026_D3_H

#include "D2.h"
#include <string>

class D3 :public D2 {
protected:
    std::string nameD3;
public:
    D3(const std::string&  vB1, const std::string& vB2, const std::string& vD1,
        const std::string7 vB3, const std::string& vD2, const std :: string& vD3);
    void show() const;
};
#endif //INC_14_10_2026_D3_H
