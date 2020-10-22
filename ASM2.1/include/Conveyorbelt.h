#ifndef _CONVEYORBELT_H_
#define _CONVEYORBELT_H_

#include <vector>
#include "Product.h"

class Conveyorbelt
{
private:
	vector<Product> product;
	static Conveyorbelt* conveyorbelt;
	Conveyorbelt();
public:
	static Conveyorbelt* get_conveyorbelt();
		
	vector<Product> get_product() const;
	void add_product(const string &name, const float &price);
	int count_product() const;
	bool is_conveyorbelt_empty() const;
	void show_conveyorbelt() const;
};

#endif