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
    //edit by wxl at 2020-05-15
    printf("2018年10月30日 yumei create!");
}

int FirstObj::add() {
    return a+b;
}
