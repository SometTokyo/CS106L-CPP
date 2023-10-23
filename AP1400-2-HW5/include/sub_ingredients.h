#ifndef SUB_INGREDIENTS_H
#define SUB_INGREDIENTS_H
#include "ingredient.h"
#include <string>
#define DEFCLASS(classname,priceunit)                         \
class classname : public Ingredient                           \
{                                                             \
public:                                                       \
    classname(size_t units) : Ingredient{priceunit, units}    \
    {                                                         \
        this->name = #classname;                              \
    }                                                         \
    virtual std::string get_name() {return this->name;}       \
    virtual Ingredient* clone() override{                     \
        return new classname (*this);                         \
    }                                                         \
}

DEFCLASS(Cinnamon, 5);
DEFCLASS(Chocolate, 5);
DEFCLASS(Sugar, 1);
DEFCLASS(Cookie, 10);
DEFCLASS(Espresso, 15);
DEFCLASS(Milk, 10);
DEFCLASS(MilkFoam, 5);
DEFCLASS(Water, 1);
#endif // SUB_INGREDIENTS_H