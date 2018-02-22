/*
#include "Map.h"
#include<string.h>

Map::Map() : m_size(0) {}

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
    if (m_size >= DEFAULT_MAX_ITEMS) {
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
    if (m_size >= DEFAULT_MAX_ITEMS) {
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
    Pair temp;
    int numInt;
    
    numInt = (m_size>other.size()) ? m_size : other.size();

    for (int i=0; i < numInt; ++i) {
        temp.setKey(m_data[i].getKey());
        temp.setValue(m_data[i].getValue());
        
        m_data[i].setKey(other.m_data[i].getKey());
        m_data[i].setValue(other.m_data[i].getValue());
        
        other.m_data[i].setKey(temp.getKey());
        other.m_data[i].setValue(temp.getValue());
    }
    numInt = m_size;
    m_size = other.size();
    other.m_size = numInt;
}

void Map::dump() const
{
    cerr << "size: " << m_size << endl;
    for (int i = 0; i < m_size; ++i) {
        cerr << m_data[i].getKey() << m_data[i].getValue() << endl;
    }
}


*/































