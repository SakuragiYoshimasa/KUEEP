//
//  main.cpp
//  KUEEP
//
//  Created by SakuragiYoshimasa on 2015/11/23.
//  Copyright © 2015年 SakuragiYoshimasa. All rights reserved.
//

#include "Includer.h"
#include "Functions/bisectionMethod.h"
#include "Models/Vector.h"

int main(int argc, const char * argv[]) {

    BisectionMethod::bisectionMethodSampleMain();
    
    Vector vec0 = *new Vector(5);
    Vector vec1 = *new Vector(5);
    for(int i = 0; i < 5; i++){
        vec0[i] = i;
        vec1[i] = i * 2;
    }
    vec0 += vec1;
    for(int i = 0; i < 5; i++){
        cout << vec0.at(i) <<endl;
    }
    return 0;
}
