/*
 * MyModule1.h
 *
 *  Created on: Jun 5, 2019
 *      Author: daniela
 */

#ifndef APP_MYMODULE1_H_
#define APP_MYMODULE1_H_

#include "../fake/FakeModule.h"
#include "../fake/FakeMessage.h"

class MyModule1 : public FakeModule
{
public:
    MyModule1();
    virtual ~MyModule1();

    virtual void initialize() override;
    virtual void handleMessage(FakeMessage *msg) override;
    virtual void finish() override;
};

#endif /* APP_MYMODULE1_H_ */
