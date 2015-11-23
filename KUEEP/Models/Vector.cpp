//
//  Vector.cpp
//  KUEEP
//
//  Created by SakuragiYoshimasa on 2015/11/23.
//  Copyright © 2015年 SakuragiYoshimasa. All rights reserved.
//

#include "Vector.h"

Vector::Vector(){}

Vector::Vector(int size){
    this->resize(size);
}

Vector Vector::operator + (Vector v1){
    Vector result = *new Vector(int(this->size()));
    for(int i = 0; i < this->size(); i++){
        result[i] = this->at(i) + v1[i];
    }
    return result;
}

Vector Vector::operator - (Vector v1){
    Vector result = *new Vector(int(this->size()));
    for(int i = 0; i < this->size(); i++){
        result[i] = this->at(i) - v1[i];
    }
    return result;
}

double Vector::operator * (Vector v1){
    double result = 0;
    for(int i = 0; i < this->size(); i++){
        result += this->at(i) * v1[i];
    }
    return result;
}

void Vector::operator += (Vector v1){
    for(int i = 0; i < this->size(); i++){
        this->at(i) += v1[i];
    }
}

void Vector::operator -= (Vector v1){
    for(int i = 0; i < this->size(); i++){
        this->at(i) -= v1[i];
    }
}