#ifndef _SHAPE_PROGRAM_H
#define _SHAPE_PROGRAM_H

#include <iostream>
#include <string>
#include <vector>

#include "Product.h"
#include "menu_program.h"
#include "Conveyorbelt.h"
#include "Customer.h"


using namespace std;

#define ADD_PRODUCT 1
#define SHOW_ALL    2
#define EXIT        0

class Program : public MenuProgram
{
private:
    Conveyorbelt *Conveyorbelt;
    vector<Product> products;
    Customer *customer;

public:
    Program();

protected:
    void print_menu();
    void do_task(const int &choice);
    void print_message(const string &msg) const;

private:
    int get_choice() const;
    void add_product();
    void add_count();
    void show_all() const;
    
};

#endif