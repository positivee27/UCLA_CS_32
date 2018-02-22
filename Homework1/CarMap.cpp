/*
#include "CarMap.h"


CarMap::CarMap () {}

bool CarMap::addCar(std::string license)
// If a car with the given license plate is not currently in the map,
// and there is room in the map, add an entry for that car recording
// that it has 0 gallons of gas in it, and return true.  Otherwise,
// make no change to the map and return false.
{
    if (m_map.insertOrUpdate(license,0))
        return true;
    else
        return false;
}

double CarMap::gas(std::string license) const
// If a car with the given license plate is in the map, return the
// number of gallons of gas in its tank; otherwise, return -1.
{
    double gallon = 0;
    if (m_map.contains(license)) {
        m_map.get(license, gallon);
        return gallon;
    }
    else {
        gallon = -1;
        return gallon;
    }
}

bool CarMap::addGas(std::string license, double gallons)
// If no car with the given license plate is in the map or if
// gallons is negative, make no change to the map and return
// false.  Otherwise, increase the number of gallons of gas in the
// indicated car by the gallons parameter and return true.
{
    if (gallons <= 0 || !m_map.contains(license)) {
        return false;
    }
    else {
            double total = 0;
            m_map.get(license, total);
            total += gallons;
            m_map.update(license, total);
            return true;
    }
}

bool CarMap::useGas(std::string license, double gallons)
// If no car with the given license plate is in the map or if
// gallons is negative or if gallons > gas(), make no change to the
// map and return false.  Otherwise, decrease the number of gallons
// of gas in the indicated car by the gallons parameter and return
// true.
{
    double k = 0;
    m_map.get(license, k); 
    if (!m_map.contains(license) || gallons <= 0 || gallons > k) {
        return false;
    }
    else {
        k -= gallons;
        m_map.update(license, k);
        return true;
    }
}

int CarMap::fleetSize() const  // Return the number of cars in the CarMap.
{
    return m_map.size();
}


void CarMap::print() const
// Write to cout one line for every car in the map.  Each line
// consists of the car's license plate, followed by one space,
// followed by the number of gallons in that car's tank.  Write
// no other text.
{
    std::string k;
    double v;
    for (int i = 0; i < fleetSize(); ++i) {
        m_map.get(i, k, v);
        m_map.empty(); 
        cout << k << " " << v << endl;
    }
}
*/

