#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

#include "Conveyorbelt.h"

class Customer 
{
private:
	Conveyorbelt* conveyorbelt;
	string name;
public:
	Customer();
	Customer(const string &name);
	void add_product_to_conveyorbelt(Product &products);
	void show_conveyorbelt() const;
	vector<Product> get_product() const;
};

#endif