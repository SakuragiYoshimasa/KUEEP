//
//  BisectionMethod.hpp
//  KUEEP
//
//  Created by SakuragiYoshimasa on 2015/11/23.
//  Copyright © 2015年 SakuragiYoshimasa. All rights reserved.
//

#ifndef BisectionMethod_hpp
#define BisectionMethod_hpp
#include "Includer.h"
///終了判定用のε
#define eps 1e-15

class BisectionMethod {
public:
    static double solve(double (*func)(double), const double minRangeX, const double maxRangeX);
    static double bisectionMethodSampleFanction(double x);
    static void bisectionMethodSampleMain();
};
#endif 
