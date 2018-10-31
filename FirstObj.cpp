//
//  FirstObj.cpp
//  FirstProj
//
//  Created by fb on 2018/10/31.
//  Copyright © 2018年 fb. All rights reserved.
//

#include "FirstObj.hpp"

FirstObj::FirstObj() {
    a = 10;
    b = 10;
}

FirstObj::~FirstObj() {
    printf("2018年10月30日 纪念余梅!");
}

int FirstObj::add() {
    return a+b;
}
