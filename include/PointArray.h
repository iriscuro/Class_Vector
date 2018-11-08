#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"

class PointArray
{
    public:
        PointArray();
        PointArray(const Point pts[], const int size);
        PointArray(PointArray &o);
        ~PointArray();//destructor

        void print();
        int getSize();
        void clear();
        void push_back(const Point &p);
        void insert(const int, const Point &p);
        void remove(const int);

    private:
        int size;
        Point *points;
        void resize(int newSize);
};

#endif // POINTARRAY_H
