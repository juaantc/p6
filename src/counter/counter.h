#ifndef COUNTER_H
#define COUNTER_H

#include "../persons/persons.h"
#include "../stage/stage.h"
#include "../catalog/catalog.h"
#include "../gclist/gclist.h"

class Counter{

    private:
            int value_;
            int min_;
            int max_;

    public:
            Counter();
            int Get(int value);
            int GetMin(int min);
            int GetMax(int max);

}
























#endif