
#include "../include/program.h"

using namespace std;

string product_name;
float product_price;
int _count;
bool running = true;


void Program::do_task(const int &choice)
{
    switch (choice)
    {
    case ADD_PRODUCT:
        add_product();
        break;
    case SHOW_ALL:
        show_all();
        break;
    case EXIT:
        print_message("Bye!");
        break;
    default:
        print_message("Invalid choice!");
    }
}

void Program::add_product()
{
    cout << " Enter product : ";
    cin >> product_name;
    cout << " Enter Price : ";
    cin >> product_price;
    Product p(product_name, product_price); 
    customer->add_product_to_conveyorbelt(p);
}

void Program::show_all() const
{
    customer->show_conveyorbelt();
}
void Program::print_message(const string &msg) const
{
    cout << msg << endl;
}

