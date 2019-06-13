/*
 * MyMessage.h
 *
 *  Created on: Jun 5, 2019
 *      Author: daniela
 */

#ifndef APP_MYMESSAGE_H_
#define APP_MYMESSAGE_H_

#include "../fake/FakeMessage.h"

class MyMessage : public FakeMessage
{
public:
    MyMessage();
    virtual ~MyMessage();

    int getCounter()
    {
        return counter;
    }

    void setCounter(int c)
    {
        counter = c;
    }

private:
    int counter;
};

#endif /* APP_MYMESSAGE_H_ */
