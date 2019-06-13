/*
 * FakeLogger.h
 *
 *  Created on: Jun 5, 2019
 *      Author: daniela
 */

#ifndef FAKE_FAKELOGGER_H_
#define FAKE_FAKELOGGER_H_

#include <iostream>

extern int simTime;

class FakeLogger {
public:
    virtual ~FakeLogger();

    static FakeLogger& getInstance()
    {
        static FakeLogger l;
        return l;
    }

    std::ostream& log()
    {
        return std::cout << "[" << simTime << "] ";
    }

private:
    FakeLogger();
};

#endif /* FAKE_FAKELOGGER_H_ */
