//
// Created by Евгения on 14.10.2026.
//

#ifndef INC_14_10_2026_D2_H
#define INC_14_10_2026_D2_H
#include "D1.h"
#include "B3.h"

#include <string>
class D2 :public D1, protected B3 {
protected:
    std::string nameD2;
public:
    D2(const std::string& vB1, const std::string& vB2, const std::string& vD1,
       const std::string& vB3, const std::string& vD2);
    void show() const;
};

#endif //INC_14_10_2026_D2_H
