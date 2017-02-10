//
// Created by Matías on 10/02/2017.
//

#include "singleton.h"


singleton * singleton::getInstance() {
    if (!instance){
        instance = new singleton;
    }
    return instance;
}

void singleton::setText(std::string number) {
    singleton::text = number;
}

std::string singleton::getText()  {
    return singleton::text;
}

