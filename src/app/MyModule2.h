/*
 * MyModule2.h
 *
 *  Created on: Jun 5, 2019
 *      Author: daniela
 */

#ifndef APP_MYMODULE2_H_
#define APP_MYMODULE2_H_

#include "../fake/FakeModule.h"
#include "../fake/FakeMessage.h"

class MyModule2 : public FakeModule
{
public:
    MyModule2();
    virtual ~MyModule2();

    virtual void initialize() override;
    virtual void handleMessage(FakeMessage *msg) override;
    virtual void finish() override;
};

#endif /* APP_MYMODULE2_H_ */
