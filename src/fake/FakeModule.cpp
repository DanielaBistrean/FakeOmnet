/*
 * FakeModule.cpp
 *
 *  Created on: Jun 5, 2019
 *      Author: daniela
 */

#include <queue>
#include <vector>
#include <cxxabi.h>
#include <typeinfo>

#include "FakeModule.h"
#include "FakeMessage.h"

struct FakeMsgCompare
{
    bool operator()(FakeMessage* fm1, FakeMessage* fm2)
    {
        return (fm1->getTime() > fm2->getTime());
    }
};
extern std::priority_queue <FakeMessage*, std::vector <FakeMessage*>, FakeMsgCompare> msgQueue;

FakeModule::FakeModule() {
    // TODO Auto-generated constructor stub

}

FakeModule::~FakeModule() {
    // TODO Auto-generated destructor stub
}

void
FakeModule::send(FakeModule* destination, FakeMessage *msg, int stime)
{
    msg->setDestination(destination);
    msg->setSender(this);
    msg->setTime(stime);

    msgQueue.push(msg);
}

char*
FakeModule::getModuleName()
{
    int status;
    char *name = abi::__cxa_demangle(typeid(*this).name(), 0, 0, &status);
    return name;
}
