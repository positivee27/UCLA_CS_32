/*
#include "newMap.h"
#include "CarMap.h"
#include <iostream>

#include <cassert>
using namespace std;


int main()
{
    CarMap m1, m2, m3;
    assert(m1.addCar("A") && m2.addCar("B") && m3.addCar("C"));
    assert(m1.addGas("A", 1.1));
    assert(m2.addGas("B", 2.2));
    assert(m2.addGas("B", 5));
    assert(!m3.addGas("C", -1));
    assert(!m1.useGas("A", 0) && m2.useGas("B", 1) && !m3.useGas("ddd", 10));
    assert(m1.fleetSize() == 1 && m2.fleetSize() == 1 && m3.fleetSize() == 1);
    
    m1.print();
    m2.print();
    m3.print();
    
    cout << "Passed all tests" << endl;
}*/

/*
#include <iostream>
#include "CarMap.h"
#include <cassert>
using namespace std;


void test() {
    
    CarMap m;
    assert(m.addCar("xyz"));            //Add a car with initial gas 0
    assert(m.gas("xyz") == 0);
    string k = "hello";
    assert(!m.addGas("car", 10) && !m.addGas("xyz", -10));   //Cannot add gas if car is not present or gas value is negative
    assert(m.addGas("xyz", 10));      //add gas of 10
    m.addGas("xyz", 10);     //add another 10 gas
    assert(m.gas("xyz")==20);     //current gas amount is 20
    m.addCar("CAR");
    m.addGas("CAR", 5);
    assert(!m.useGas("CAR", 10)  && m.useGas("xyz", 10));     //Cannot use gas if gas usage > gas present
    assert(m.gas("xyz")==10);
    assert(m.fleetSize()==2);
    
    //print out the car and gas amount
    m.print();
    
}


int main()
{
    test();
    cout << "Passed all tests" << endl;
}
*/

