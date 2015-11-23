//
//  Vector.hpp
//  KUEEP
//
//  Created by SakuragiYoshimasa on 2015/11/23.
//  Copyright © 2015年 SakuragiYoshimasa. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp
#include "Includer.h"

class Vector : public vector<double> {
public:
    Vector(int size);

    Vector operator + (Vector v1);
    Vector operator - (Vector v1);
    double operator * (Vector v1);
    void operator += (Vector v1);
    void operator -= (Vector v1);
private:
    Vector();

};
#endif