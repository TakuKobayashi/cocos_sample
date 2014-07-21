//
//  Calc.h
//  sample
//
//  Created by 小林拓 on 2014/07/21.
//
//

#ifndef __sample__Calc__
#define __sample__Calc__

//cocos2dxのクラスを使う場合は
//<iostream>を"cocos2d.h"に変更する必要がある
#include "cocos2d.h"
//#include <iostream>

class Calc{
private:
    int _sum = 20;
public:
    void addValue(int value);
    int getValue();
};


#endif /* defined(__sample__Calc__) */
