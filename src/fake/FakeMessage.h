/*
 * FakeMessage.h
 *
 *  Created on: Jun 5, 2019
 *      Author: daniela
 */

#ifndef FAKEMESSAGE_H_
#define FAKEMESSAGE_H_

#include "cxxabi.h"
#include <typeinfo>

class FakeModule;

class FakeMessage {
public:
    FakeMessage();
    virtual ~FakeMessage();

    FakeModule *getSender()
    {
        return m_sender;
    }

    void setSender(FakeModule *sender)
    {
        m_sender = sender;
    }

    FakeModule *getDestination()
    {
        return m_destination;
    }

    void setDestination(FakeModule *destination)
    {
        m_destination = destination;
    }

    int getTime()
    {
        return m_time;
    }

    void setTime(int t)
    {
        m_time = t;
    }

    char *getMsgName()
    {
        int status;
        char *name = abi::__cxa_demangle(typeid(*this).name(), 0, 0, &status);
        return name;
    }

private:
    FakeModule *m_sender;
    FakeModule *m_destination;
    int m_time;
};

#endif /* FAKEMESSAGE_H_ */
