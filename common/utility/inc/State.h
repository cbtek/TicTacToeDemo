#pragma once

namespace cbtek{
namespace common{
namespace utility{

/**
 * @brief The Transition enum
 */
enum class Transition
{
    Enter,
    Update,
    Exit
};

class State
{
public:

    /**
     * @brief State
     */
    State();

    /**
     * @brief isEnter
     * @return
     */
    bool isEnter() const;

    /**
     * @brief isUpdate
     * @return
     */
    bool isUpdate() const;

    /**
     * @brief isExit
     * @return
     */
    bool isExit() const;

    /**
     * @brief setEnter
     */
    void setEnter();

    /**
     * @brief setUpdate
     */
    void setUpdate();

    /**
     * @brief setExit
     */
    void setExit();

    /**
     * @brief getType
     * @return
     */
    Transition getTransition() const;

    /**
     * @brief setId
     * @param id
     */
    void setId(int id);

    /**
     * @brief getId
     * @return
     */
    int getId() const;

    /**
     * @brief reset
     */
    void reset();

    /**
     * @brief setNext
     */
    void setNextTransition();
private:
    Transition m_type;
    int m_id;


};
}}}//namespace
