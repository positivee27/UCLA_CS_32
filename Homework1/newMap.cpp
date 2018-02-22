
#include "newMap.h"
#include<string.h>

Map::Map() {
    m_size = 0;
    m_max = DEFAULT_MAX_ITEMS;
    m_data = new Pair[DEFAULT_MAX_ITEMS];
}

Map::Map(const int x) {
    if (x < 0)
    {
        exit(1);
    }
    else {
        m_size = 0;
        m_max = x;
        m_data = new Pair[x];
    }
}

// assignment opertaor
Map& Map::operator=(const Map& other)
{
    delete [] m_data;
    m_max = other.m_max;
    m_size = other.m_size;
    m_data = new Pair[m_size];
    for (int j = 0; j < m_size; ++j) {
        m_data[j].setKey(other.m_data[j].getKey());
        m_data[j].setValue(other.m_data[j].getValue());
    }
    return (*this);
}

// copy constructor
Map::Map(const Map& other)
{
    m_max = other.m_max;
    m_size = other.m_size;
    m_data = new Pair[m_size];
    for (int j = 0; j < m_size; ++j) {
        m_data[j].setKey(other.m_data[j].getKey());
        m_data[j].setValue(other.m_data[j].getValue());
    }
}

Map::~Map()
{
    delete []m_data;
}

bool Map::empty() const
{
    if (m_size == 0) {return true;}
    else {return false;}
}

int Map::size() const
{
    return m_size;
}

bool Map::insert(const KeyType& key, const ValueType& value)
{
    if (m_size >= m_max) {
        return false;
    }
    else {
        for (int i = 0; i < m_size; ++i) {
            if (key == m_data[i].getKey()) {
                return false;
            }
        }
        m_data[m_size].setKey(key);
        m_data[m_size].setValue(value);
        ++m_size;
        return true;
    }
}


bool Map::update(const KeyType& key, const ValueType& value)
{
    for (int i = 0; i < m_size; ++i) {
        if (key == m_data[i].getKey()) {
            m_data[i].setValue(value);
            return true;
        }
    }
    return false;
}

bool Map::insertOrUpdate(const KeyType& key, const ValueType& value)
{
    for (int i = 0; i < m_size; ++i) {
        if (key == m_data[i].getKey()) {
            m_data[i].setValue(value);
            return true;
        }
    }
    if (m_size >= m_max) {
        return false;
    }
    else {
        m_data[m_size].setKey(key);
        m_data[m_size].setValue(value);
        ++m_size;
        return true;
    }
}

bool Map::erase(const KeyType& key)
{
    for (int i = 0; i < m_size; ++i) {
        if (key == m_data[i].getKey()) {
            m_data[i].setKey(m_data[m_size-1].getKey());
            m_data[i].setValue(m_data[m_size-1].getValue());
            --m_size;
            return true;
        }
    }
    return false;
}

bool Map::contains(const KeyType& key) const
{
    for (int i = 0; i < m_size; ++i) {
        if (key == m_data[i].getKey()) {
            return true;
        }
    }
    return false;
}

bool Map::get(const KeyType& key, ValueType& value) const
{
    for (int i = 0; i < m_size; ++i) {
        if (key == m_data[i].getKey()) {
            value = m_data[i].getValue();
            return true;
        }
    }
    return false;
}

bool Map::get(int i, KeyType& key, ValueType& value) const
{
    if (i >= 0 && i < m_size) {
        key = m_data[i].getKey();
        value = m_data[i].getValue();
        return true;
    }
    return false;
}

void Map::swap(Map& other)
{
    Map temp(other);
    other = *this;
    *this = temp;
}

void Map::dump() const
{
    cerr << "size: " << m_size << endl;
    for (int i = 0; i < m_size; ++i) {
        cerr << m_data[i].getKey() << m_data[i].getValue() << endl;
    }
}






































