//
// Created by Matías on 10/02/2017.
//

#ifndef SINGLETONINC_SINGLETON_H
#define SINGLETONINC_SINGLETON_H

#include <string>
#include <stdlib.h>

class singleton {
    static singleton * instance;

    singleton(){
        text = "initialized";
    }
    public:
        static singleton *  getInstance();

        void setText(std::string text);
        std::string getText();

    private:

         std::string text;

};


#endif //SINGLETONINC_SINGLETON_H
