//
// Created by Евгения on 14.10.2026.
//

#ifndef INC_14_10_2026_D1_H
#define INC_14_10_2026_D1_H

#include "B1.h"
#include "B2.h"
#include <string>

class D1 :protected B1, public B2 {
protected:
    std::string nameD1;
public:
    D1(const std::string& vB1, const std::string& vB2, const std::string& vD1);
    void show()const;
};
#endif //INC_14_10_2026_D1_H
