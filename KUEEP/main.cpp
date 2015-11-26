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
#include "Models/Matrix.h"

int main(int argc, const char * argv[]) {

    //BisectionMethod::bisectionMethodSampleMain();
    
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
    
    Matrix mat0 = *new Matrix(3,3);
    Matrix mat1 = *new Matrix(3,3);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            mat0[i][j] = i + j;
            mat1[i][j] = i + j;
        }
    }
    Matrix mat2 = mat0 * mat1;
    mat1 += mat0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat0[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
