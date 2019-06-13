/*
 * MyModule2.cpp
 *
 *  Created on: Jun 5, 2019
 *      Author: daniela
 */

#include "MyModule2.h"
#include "NetworkAbstraction.h"
#include "MyMessage.h"

extern int simTime;

MyModule2::MyModule2() {
    // TODO Auto-generated constructor stub

    NetworkAbstraction::getInstance().registerUser(this, 2);
}

MyModule2::~MyModule2() {
    // TODO Auto-generated destructor stub
}

void
MyModule2::initialize()
{
    EV << getModuleName() << " initialize" << std::endl;

    MyMessage *m = new MyMessage();

    send(NetworkAbstraction::getInstance().getModule(1), m, simTime + 1);
}

void
MyModule2::handleMessage(FakeMessage *msg)
{
    MyMessage *m = dynamic_cast <MyMessage*> (msg);
//    EV << "got a message with counter " << m->getCounter() << std::endl;

    m->setCounter(m->getCounter()+1);
    send(NetworkAbstraction::getInstance().getModule(1), m, simTime + 5);
}

void
MyModule2::finish()
{
    EV << getModuleName() << " finish" << std::endl;
}

