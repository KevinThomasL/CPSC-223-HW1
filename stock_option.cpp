//----------------------------------------------------------------------
// Author: Kevin Lunden
// Assignment: 1
//----------------------------------------------------------------------

#include "stock_option.h"

StockOption::StockOption(std::string the_symbol) : Stock(the_symbol)
{}

void StockOption::set_strike_price(double the_strike_price)
{
 strike_price = the_strike_price;
}

double StockOption::get_strike_price() const
{
 return strike_price;
}

double StockOption::sell_value() const
{
 return ((get_strike_price() - get_purchase_price()) * get_holdings()) - (get_share_value() * get_holdings());
}
