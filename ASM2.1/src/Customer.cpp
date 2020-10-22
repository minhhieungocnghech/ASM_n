#include "../include/Customer.h"
Customer::Customer()
{
}
Customer::Customer(const string &name)
{
	this->name = name;
	conveyorbelt = Conveyorbelt::get_conveyorbelt();
}

void Customer::add_product_to_conveyorbelt(Product &products) 
{
	conveyorbelt->add_product(products.get_name(), products.get_price());
}

void Customer::show_conveyorbelt() const
{
	cout << "Customer name: " << name << endl;
	conveyorbelt->show_conveyorbelt();
}

vector<Product> Customer::get_product() const
{
	return conveyorbelt->get_product();
}
