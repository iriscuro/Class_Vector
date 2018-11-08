#include <iostream>
#include "Point.h"
#include "PointArray.h"

using namespace std;

int main()
{
    Point p(1, 3);
    Point q(4, 8);
    Point r(7, 2);
    Point arr[] = {p, q , r};
    int size = sizeof(arr)/sizeof(arr[0]);

    PointArray pa2(arr, size);

    PointArray pa = pa2;

    pa.getSize();
    //cout << pa.getSize() << endl;
    pa.push_back(p);
    cout<< "pa"<<endl;
    pa.print();
    cout<<endl;

    pa.insert(1, q);
    pa.print();
    pa.clear();
    cout << pa.getSize() << "\n "<<endl;

    cout<< " pa2 "<<endl;
    pa2.print();
    cout <<endl;
    //PointArray pa=pa2;
    pa2.push_back(p);
    cout<<"pa2 :"<<endl;
    pa2.print();
    //pa.print();
    cout <<"\n";
    cout <<pa.getSize()<<endl;
    pa2.insert(4,r);
    cout <<"pa2 ;"<<endl;
    pa2.print();


    return 0;
}
