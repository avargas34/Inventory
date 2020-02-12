/**
 * @file: Inventory.h
 *
 * @brief: Includes the header file for the Inventory class, and maintains
 * all private and public member functions.
 *
 * @Author: Kevin Buffardi
 * @Author: Anthony Vargas
 * @date: Feb 12th, 2020
 */

#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;
using std::cout;
using std::endl;

/**
 * @brief: The Private member functions are a string for the name
 * of the object to be sold, a float to hold to price of the item, allowing for
 * decimals. An int stock to keep track of the amount of Inventory left in
 * stock.
 *
 * @param: none
 * @returns: none
 */
class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
