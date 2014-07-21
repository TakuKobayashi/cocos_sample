//
//  Calc.cpp
//  sample
//
//  Created by 小林拓 on 2014/07/21.
//
//

#include "Calc.h"

//まずはcocos2dのネームスペースを使用する以下のコードを書いて下さい。
//これを付けないとcocos2d-xが利用できません
USING_NS_CC;

void Calc::addValue(int value){
    _sum = _sum + value;
}

int Calc::getValue(){
    return _sum;
}
