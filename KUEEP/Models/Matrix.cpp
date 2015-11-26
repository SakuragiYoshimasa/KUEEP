//
//  Matrix.cpp
//  KUEEP
//
//  Created by SakuragiYoshimasa on 2015/11/23.
//  Copyright © 2015年 SakuragiYoshimasa. All rights reserved.
//

#include "Matrix.h"

Matrix::Matrix(int lowSize, int columnSize){
    
    this->lowSize = lowSize;
    this->columnSize = columnSize;
    this->resize(lowSize);
    for(int i = 0; i < lowSize; i++){
        this->at(i).resize(columnSize);
    }
}

const int Matrix::getLowSize(){
    return this->lowSize;
}

const int Matrix::getColumnSize(){
    return  this->columnSize;
}

Matrix Matrix::operator + (Matrix m1){
    if(this->getColumnSize() == m1.getColumnSize() && this->getLowSize() == m1.getLowSize()){
        Matrix result = *new Matrix(this->getLowSize(), this->getColumnSize());
        for(int i = 0; i < this->getLowSize(); i++){
            for(int j = 0; j < this->getColumnSize(); j++){
                result[i][j] = this->at(i)[j] + m1[i][j];
            }
        }
        return result;
    }else{
        throw Expections::DISABLE_CALCULATE_EXPECTION;
    }
};

Matrix Matrix::operator - (Matrix m1){
    if(this->getColumnSize() == m1.getColumnSize() && this->getLowSize() == m1.getLowSize()){
        Matrix result = *new Matrix(this->getLowSize(), this->getColumnSize());
        for(int i = 0; i < this->getLowSize(); i++){
            for(int j = 0; j < this->getColumnSize(); j++){
                result[i][j] = this->at(i)[j] - m1[i][j];
            }
        }
        return result;
    }else{
        throw Expections::DISABLE_CALCULATE_EXPECTION;
    }
};

Matrix Matrix::operator * (Matrix m1){
    if(checkEnableCalculate(*this, m1)){
        Matrix result = *new Matrix(this->getLowSize(), m1.getColumnSize());
        for(int i = 0; i < this->getLowSize(); i++){
            for(int j = 0; j < m1.getColumnSize(); j++){
                result[i][j] = 0;
                for(int k = 0; k < this->getColumnSize(); k++){
                    result[i][j] += this->at(i).at(k) * m1[k][j];
                }
            }
        }
        return result;
    }else{
        throw Expections::DISABLE_CALCULATE_EXPECTION;
    }
};

void Matrix::operator += (Matrix m1){
    if(this->getColumnSize() == m1.getColumnSize() && this->getLowSize() == m1.getLowSize()){
        for(int i = 0; i < this->getLowSize(); i++){
            for(int j = 0; j < this->getColumnSize(); j++){
                this->at(i)[j] += m1[i][j];
            }
        }
    }else{
        throw Expections::DISABLE_CALCULATE_EXPECTION;
    }
};
void Matrix::operator -= (Matrix m1){
    if(this->getColumnSize() == m1.getColumnSize() && this->getLowSize() == m1.getLowSize()){
        for(int i = 0; i < this->getLowSize(); i++){
            for(int j = 0; j < this->getColumnSize(); j++){
                this->at(i)[j] -= m1[i][j];
            }
        }
    }else{
        throw Expections::DISABLE_CALCULATE_EXPECTION;
    }
};

Vector Matrix::operator + (Vector v1){
        return *new Vector(1);
};
Vector Matrix::operator - (Vector v1){
        return *new Vector(1);
};
double Matrix::operator * (Vector v1){
        return 0;
};
void Matrix::operator += (Vector v1){};
void Matrix::operator -= (Vector v1){};

Vector& Matrix::operator [](int index){
    return this->at(index);
}

void Matrix::operator =(vector<vector<double>>){
}
bool Matrix::checkEnableCalculate(Matrix m0, Matrix m1){
    return m0.getColumnSize() == m1.getLowSize();
}

bool Matrix::checkEnableCalculate(Matrix m0, Vector v0){
    return m0.getColumnSize() == v0.getDimension();
}