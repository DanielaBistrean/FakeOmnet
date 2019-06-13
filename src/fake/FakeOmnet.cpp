//============================================================================
// Name        : FakeOmnet.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "FakeModule.h"

#include <vector>
#include <memory>
#include <queue>

#include "../app/MyModule1.h"
#include "../app/MyModule2.h"
#include "FakeMessage.h"

struct FakeMsgCompare
{
    bool operator()(FakeMessage* fm1, FakeMessage* fm2)
    {
        return (fm1->getTime() > fm2->getTime());
    }
};

int simTime = 0;
std::priority_queue <FakeMessage*, std::vector <FakeMessage*>, FakeMsgCompare> msgQueue;

int
main()
{
    std::vector <FakeModule *> modules =
    {
           new MyModule1,
           new MyModule2
    };

    // normal fake
    for (auto m : modules)
        m->initialize();

    while (1)
    {
        if (msgQueue.empty())
            break;
        FakeMessage* msg = msgQueue.top();
        msgQueue.pop();

        FakeModule * destination = msg->getDestination();
        simTime = msg->getTime();
        std::cout << "[" << simTime << "] Message " << "\"" << msg->getMsgName() << "\"" <<" arrived at " << destination->getModuleName() << std::endl;
        destination->handleMessage(msg);
    }

    for (auto m : modules)
    {
        m->finish();
        delete m;
    }

    return 0;
}
