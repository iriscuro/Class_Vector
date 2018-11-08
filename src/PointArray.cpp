#include "PointArray.h"

PointArray::PointArray()
{
    this->size = 0;
    this->points = new Point[size];
}

PointArray::PointArray(const Point pts[], const int size) {
    this->size = size;
    this->points = new Point[size];
    for(int i = 0; i < size; i++)
        points[i] = pts[i];
}

PointArray::PointArray(PointArray &o){
    this->size = o.size;
    this->points = new Point[size];
    for(int i = 0; i < size; i++)
        points[i] = o.points[i];
}

void PointArray::resize(int newSize) {//cambiar el tamañode arreglo
	Point *pts = new Point[newSize];
	int minsize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minsize; i++)
        pts[i] = points[i];
	delete[] points;
	size = newSize;
	points = pts;
}

void PointArray::print() {
	for(int i = 0; i < size; i++)
		points[i].print();
}

void PointArray::push_back(const Point &p){
	resize(size+1);
	points[size-1] = p;
}

void PointArray::insert(const int pos, const Point &p) {
	resize(size+1);
    for(int i = size-1; i < pos; i--)
        points[i] = points[i-1];
	points[pos] = p;
}

void PointArray::remove(const int pos) {

}

void PointArray::clear() {
	resize(0);
}

int PointArray::getSize(){
    return size;
}

PointArray::~PointArray()
{
    delete[] points;
}
