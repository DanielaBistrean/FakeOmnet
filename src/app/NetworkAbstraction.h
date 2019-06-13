/*
 * NetworkAbstraction.h
 *
 *  Created on: Jun 5, 2019
 *      Author: daniela
 */

#ifndef APP_NETWORKABSTRACTION_H_
#define APP_NETWORKABSTRACTION_H_

#include <utility>
#include <map>

#include "../fake/FakeModule.h"

class NetworkAbstraction {
public:
    virtual ~NetworkAbstraction();

    void registerUser(FakeModule *user, int id)
    {
        m_users.insert(std::make_pair (id, user));
    }

    void deregisterUser(int id)
    {
        auto it = m_users.find (id);
        if (it != m_users.end())
            m_users.erase(it);
    }

    FakeModule* getModule(int id)
    {
        auto it = m_users.find (id);
        if (it != m_users.end())
            return it->second;

        return nullptr;
    }

    static NetworkAbstraction& getInstance()
    {
        static NetworkAbstraction n;
        return n;
    }
private:
    NetworkAbstraction();
    std::map <int, FakeModule*> m_users;
};

#endif /* APP_NETWORKABSTRACTION_H_ */
