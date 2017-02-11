//
// Created by Matías on 10/02/2017.
//

#ifndef SINGLETONINC_SINGLETON_H
#define SINGLETONINC_SINGLETON_H

#include <string>

class singleton {
    // be sure singleton reference, constructor and destructor are private or protected
private:
    static singleton * instance;
    singleton();
    ~singleton();

    std::string text;

public:
    // access singleton instance
    static singleton * getInstance();
    // extern singleton instance destructor
    static void deleteInstance();

    void setText(std::string text);
    std::string getText();

};


#endif //SINGLETONINC_SINGLETON_H