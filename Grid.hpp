#ifndef GRID_HPP_INCLUDED
#define GRID_HPP_INCLUDED

#include <cinttypes>
#include <vector>
#include <iostream>

class Cell
{
    uint8_t state;

public:

    void addState (uint8_t newState)
    {
        state |= newState;
    }

    void setState (uint8_t newState)
    {
        state = newState;
    }
};

class Grid
{
    uint16_t gridHeight, gridWidth;
    std::vector <std::vector <Cell>> cells;
};

#endif // GRID_HPP_INCLUDED
