//
//  Matrix.hpp
//  KUEEP
//
//  Created by SakuragiYoshimasa on 2015/11/23.
//  Copyright © 2015年 SakuragiYoshimasa. All rights reserved.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include "Vector.h"

class Matrix : vector<Vector> {
public:
    Matrix(){};
    Matrix(int lowSize, int columnSize);
    const int getLowSize();
    const int getColumnSize();
    
    Matrix operator + (Matrix m1);
    Matrix operator - (Matrix m1);
    Matrix operator * (Matrix m1);
    void operator += (Matrix m1);
    void operator -= (Matrix m1);
    
    Vector operator + (Vector v1);
    Vector operator - (Vector v1);
    double operator * (Vector v1);
    void operator += (Vector v1);
    void operator -= (Vector v1);
    
    static bool checkEnableCalculate(const Matrix m0, const Matrix m1);
    static bool checkEnableCalculate(const Matrix m0, const Vector v0);
    
    Vector& operator [](int index);
    
    void operator =(vector<vector<double>>);
    
private:
    int lowSize, columnSize;

};
#endif /* Matrix_hpp */
