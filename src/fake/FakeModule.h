/*
 * FakeModule.h
 *
 *  Created on: Jun 5, 2019
 *      Author: daniela
 */

#define EV FakeLogger::getInstance().log()

#ifndef FAKEMODULE_H_
#define FAKEMODULE_H_

#include "FakeLogger.h"

class FakeMessage;

class FakeModule {
public:
    FakeModule();
    virtual ~FakeModule();

    virtual void initialize() = 0;
    virtual void handleMessage(FakeMessage *msg) = 0;
    virtual void finish() = 0;

    void send(FakeModule* destination, FakeMessage *msg, int stime);
    char *getModuleName();
};

#endif /* FAKEMODULE_H_ */
