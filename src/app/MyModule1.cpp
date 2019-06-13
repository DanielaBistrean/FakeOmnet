/*
 * MyModule1.cpp
 *
 *  Created on: Jun 5, 2019
 *      Author: daniela
 */

#include "MyModule1.h"
#include "NetworkAbstraction.h"
#include "MyMessage.h"

extern int simTime;

#include <iostream>

MyModule1::MyModule1() {
    // TODO Auto-generated constructor stub

    NetworkAbstraction::getInstance().registerUser(this, 1);

}

MyModule1::~MyModule1() {
    // TODO Auto-generated destructor stub
}

void
MyModule1::initialize()
{
    EV << getModuleName() << " initialize" << std::endl;

    MyMessage *m = new MyMessage();
    m->setCounter(0);

    FakeModule *dest = NetworkAbstraction::getInstance().getModule(2);
    send(dest, m, simTime + 2);
}

void
MyModule1::handleMessage(FakeMessage *msg)
{
//    EV << "Got message from module 2" << std::endl;
}

void
MyModule1::finish()
{
    EV << getModuleName() << " finish" << std::endl;
}


