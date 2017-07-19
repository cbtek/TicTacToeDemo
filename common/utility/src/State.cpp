
#include "State.h"

namespace cbtek {
namespace common {
namespace utility {

State::State()
{
    reset();
    m_id=0;
}

void State::reset()
{
    m_type = Transition::Enter;
}

void State::setNextTransition()
{
    if (m_type == Transition::Enter)
    {
        m_type = Transition::Update;
    }
    else if (m_type == Transition::Update)
    {
        m_type = Transition::Exit;
    }
    else if (m_type == Transition::Exit)
    {
        m_type = Transition::Enter;
    }
}
void State::setId(int id)
{
    m_id = id;
}
int State::getId() const
{
    return m_id;
}

bool State::isEnter() const
{
    return m_type == Transition::Enter;
}

bool State::isUpdate() const
{
    return m_type == Transition::Update;
}

bool State::isExit() const
{
    return m_type == Transition::Exit;
}

void State::setEnter()
{
    m_type = Transition::Enter;
}
void State::setUpdate()
{
    m_type = Transition::Update;
}
void State::setExit()
{
    m_type = Transition::Exit;
}

Transition State::getTransition() const
{
    return m_type;
}
}}}//namespace
