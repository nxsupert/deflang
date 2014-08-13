/* 
 * File:   funcAdd.h
 * Author: border2
 *
 * Created on 12 August 2014, 12:24
 */

#ifndef FUNCADD_H
#define	FUNCADD_H
#include "nativeFunction.h"
#include "stringUtils.h"
#include "memBusUtils.h"
#include "console.h"
#include "deflangVM.h"
#include <sstream>
class funcAdd : public nativeFunction{
public:
    funcAdd();
    void callFunction(std::vector<std::string>* memBus, int*  commandPos, deflangVM * vm);
private:

};

#endif	/* FUNCADD_H */

