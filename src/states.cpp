#include "../include/states.h"

bool mefd0_state0(const char* ptr);
bool mefd0_state1(const char* ptr);
bool mefd0_state2(const char* ptr);

bool mefd1_state0(const char* ptr);
bool mefd1_state1(const char* ptr);
bool mefd1_state2(const char* ptr);

bool mefd2_state0(const char* ptr);
bool mefd2_state1(const char* ptr);
bool mefd2_state2(const char* ptr);
bool mefd2_state3(const char* ptr);

bool mefd3_state0(const char* ptr);
bool mefd3_state1(const char* ptr);
bool mefd3_state2(const char* ptr);

bool mefd4_state0(const char* ptr);
bool mefd4_state1(const char* ptr);
bool mefd4_state2(const char* ptr);

bool mefd0_state0(const char* ptr)
{
    bool ret = false;
    const char c = *ptr;

    if('0' == c)
    {
        ret = mefd0_state1(ptr+1);
    }
    else if('1' == c)
    {
        ret = mefd0_state0(ptr+1);
    }
    else if('\0' == c)
    {
        ret = true;
    }

    return ret;
}

bool mefd0_state1(const char* ptr)
{
    bool ret = false;
    const char c = *ptr;

    if('0' == c)
    {
        ret = mefd0_state2(ptr+1);
    }
    else if('1' == c)
    {
        ret = mefd0_state0(ptr+1);
    }

    return ret;
}

bool mefd0_state2(const char* ptr)
{
    (void) ptr;
    return false;
}

bool mefd1_state0(const char* ptr)
{
    bool ret = false;
    const char c = *ptr;

    if('0' == c)
    {
        ret = mefd1_state1(ptr+1);
    }
    else if('1' == c)
    {
        ret = mefd1_state0(ptr+1);
    }

    return ret;
}

bool mefd1_state1(const char* ptr)
{
    bool ret = false;
    const char c = *ptr;

    if('0' == c)
    {
        ret = mefd1_state2(ptr+1);
    }
    else if('1' == c)
    {
        ret = mefd1_state0(ptr+1);
    }

    return ret;
}

bool mefd1_state2(const char* ptr)
{
    bool ret = false;
    const char c = *ptr;

    if('0' == c)
    {
        ret = mefd1_state2(ptr+1);
    }
    else if('1' == c)
    {
        ret = mefd1_state0(ptr+1);
    }
    else if('\0' == c)
    {
        ret = true;
    }

    return ret;
}

bool mefd2_state0(const char* ptr)
{
    bool ret = false;
    const char c = *ptr;

    if('0' == c)
    {
        ret = mefd2_state1(ptr+1);
    }
    else if('1' == c)
    {
        ret = mefd2_state0(ptr+1);
    }

    return ret;
}

bool mefd2_state1(const char* ptr)
{
    bool ret = false;
    const char c = *ptr;

    if('0' == c)
    {
        ret = mefd2_state2(ptr+1);
    }
    else if('1' == c)
    {
        ret = mefd2_state1(ptr+1);
    }

    return ret;
}

bool mefd2_state2(const char* ptr)
{
    bool ret = false;
    const char c = *ptr;

    if('0' == c)
    {
        ret = mefd2_state3(ptr+1);
    }
    else if('1' == c)
    {
        ret = mefd2_state2(ptr+1);
    }

    return ret;
}

bool mefd2_state3(const char* ptr)
{
    (void) ptr;
    return true;
}

bool mefd3_state0(const char* ptr)
{
    bool ret = false;
    const char c = *ptr;

    if('0' == c)
    {
        ret = mefd3_state2(ptr+1);
    }
    else if('1' == c)
    {
        ret = mefd3_state1(ptr+1);
    }

    return ret;
}

bool mefd3_state1(const char* ptr)
{
    (void) ptr;
    return true;
}

bool mefd3_state2(const char* ptr)
{
    (void) ptr;
    return false;
}

bool mefd4_state0(const char* ptr)
{
    bool ret = false;
    const char c = *ptr;

    if('0' == c)
    {
        ret = mefd4_state1(ptr+1);
    }
    else if('1' == c)
    {
        ret = mefd4_state2(ptr+1);
    }

    return ret;
}

bool mefd4_state1(const char* ptr)
{
    (void) ptr;
    return true;
}

bool mefd4_state2(const char* ptr)
{
    (void) ptr;
    return false;
}

bool mefd0(const char* ptr)
{
    return mefd0_state0(ptr);
}

bool mefd1(const char* ptr)
{
    return mefd1_state0(ptr);
}

bool mefd2(const char* ptr)
{
    return mefd2_state0(ptr);
}

bool mefd3(const char* ptr)
{
    return mefd3_state0(ptr);
}

bool mefd4(const char* ptr)
{
    return mefd4_state0(ptr);
}