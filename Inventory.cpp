/**
 * @file: Inventory.cpp
 *
 * @brief: This file contains all the functions listed in the header file
 *
 * @Author: Kevin Buffardi
 * @Author: Anthony Vargas
 * @date: Feb 12th, 2020
 */

#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/**
 * @brief: This is the sell function which sells the stock. This function now
 * fixes the past bug of selling items of stock. The if statement first checks
 * if the stock is at 0, and if it is less than that the item is out of stock
 * and will no longer sell any of that item.
 *
 * @param: none
 * @returns: none
 */
void Inventory::sell()
{
  if(m_in_stock <= 0)
    cout << "Sorry, that item is out of stock" << endl;

  else
    m_in_stock--;
}

/**
 * @brief: this is the output function that is used for the output
 *
 * @param: stream - used to output format
 * @param: item - the item variable which holds the name and price
 * @returns: the value of stream
 */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
    << " $"
    << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
