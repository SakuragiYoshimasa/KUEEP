//
//  BisectionMethod.cpp
//  KUEEP
//
//  Created by SakuragiYoshimasa on 2015/11/23.
//  Copyright © 2015年 SakuragiYoshimasa. All rights reserved.
//

#include "BisectionMethod.h"

double BisectionMethod::solve(double (*func)(double), const double minRangeX, const double maxRangeX){
    if(func(minRangeX) * func(maxRangeX) > 0){
        throw "No Solution in this range";
        return 0;
    }
    
    double a = minRangeX;
    double b = maxRangeX;
    double c = 0.0;
    
    while (b - a > eps) {
        c = (a + b) / 2.0;
        if(func(a) * func(c) < 0){
            b = c;
        }else{
            a = c;
        }
    }
    return c;
}

double BisectionMethod::bisectionMethodSampleFanction(double x){
    return pow(x,3) -6 * pow(x,2) + 11 * x - 3;
}

void BisectionMethod::bisectionMethodSampleMain(){
    cout << "-----------BisectionMethod Sample--------------" << endl;
    cout << "Function is x^3 - 6 * x^2 + 11 * x - 3" << endl;
    cout << solve(bisectionMethodSampleFanction,0,1) << endl;
}

/*
 double f(double x){
 
 }
 
 //二分法を用いて解く
 double solveWithBisectionMethod(double (*func)(double), const double minRangeX, const double maxRangeX){
 if(func(minRangeX) * func(maxRangeX) > 0){
 throw "No Solution in this range";
 return 0;
 }
 
 double a = minRangeX;
 double b = maxRangeX;
 double c = 0.0;
 
 while (b - a > eps) {
 c = (a + b) / 2.0;
 if(func(a) * func(c) < 0){
 b = c;
 }else{
 a = c;
 }
 }
 return c;
 }*/
/*namespace BisectionMethodSample {
 int main(int argc, char* argv[]){

 return 0;
 }
 }*/