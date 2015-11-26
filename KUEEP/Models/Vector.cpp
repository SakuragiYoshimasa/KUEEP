//
//  Vector.cpp
//  KUEEP
//
//  Created by SakuragiYoshimasa on 2015/11/23.
//  Copyright © 2015年 SakuragiYoshimasa. All rights reserved.
//

#include "Vector.h"


Vector::Vector(int dimension){
    this->dimension = dimension;
    this->resize(dimension);
}

int Vector::getDimension(){
    return this->dimension;
}

Vector Vector::operator + (Vector v1){
    if(!checkSize(*this, v1)) return NULL;
    Vector result = *new Vector(int(this->size()));
    for(int i = 0; i < this->size(); i++){
        result[i] = this->at(i) + v1[i];
    }
    return result;
}

Vector Vector::operator - (Vector v1){
    if(!checkSize(*this, v1)) return NULL;
    Vector result = *new Vector(int(this->size()));
    for(int i = 0; i < this->size(); i++){
        result[i] = this->at(i) - v1[i];
    }
    return result;
}

double Vector::operator * (Vector v1){
    if(!checkSize(*this, v1)) return NULL;
    double result = 0;
    for(int i = 0; i < this->size(); i++){
        result += this->at(i) * v1[i];
    }
    return result;
}

void Vector::operator += (Vector v1){
    if(!checkSize(*this, v1)) return;
    for(int i = 0; i < this->size(); i++){
        this->at(i) += v1[i];
    }
}

void Vector::operator -= (Vector v1){
    if(!checkSize(*this, v1)) return;
    for(int i = 0; i < this->size(); i++){
        this->at(i) -= v1[i];
    }
}

bool Vector::checkSize(Vector v0, Vector v1){
    if(v0.size() == v1.size()) return true;
    return false;
}