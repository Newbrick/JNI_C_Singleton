//
// Created by Matías on 10/02/2017.
//

#include "singleton.h"

/**
 * Singleton instance
 */
singleton * singleton::instance = nullptr;

/**
 * Default constructor
 */
singleton::singleton () {
    // do anything here
    text = "initialited by default constructor";
}

/**
 * Destructor
 */
singleton::~singleton() {
    // free all resources allocated by static instance pointer
}

/**
 * Access singleton instance
 */
singleton * singleton::getInstance () {
    // in C++11 use nullptr instead NULL
    if (singleton::instance == nullptr) {
        singleton::instance = new singleton;
    }
    return singleton::instance;
}

/**
 * Extern singleton instance destructor
 */
void singleton::deleteInstance() {
    // in C++1 use nullptr instead NULL
    if (singleton::instance != nullptr){
        delete singleton::instance;
        singleton::instance = nullptr;
    }
}


void singleton::setText(std::string text) {
    this->text = text;
}

std::string singleton::getText()  {
    return text;
}

