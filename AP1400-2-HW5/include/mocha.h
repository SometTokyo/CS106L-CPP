#ifndef MOCHA_H
#define MOCHA_H
#include "ingredient.h"
#include "sub_ingredients.h"
#include "espresso_based.h"
#include <string>
#include <vector>
#include <iostream>

class Mocha : public EspressoBased
{
public:
    Mocha();
    Mocha(const Mocha& cap);
    ~Mocha();

    void operator=(const Mocha& cap);

    virtual std::string get_name() override;
    virtual double price() override;
    void brew();

    void add_side_item(Ingredient* side);
    std::vector<Ingredient*>& get_side_items();

private:
    std::vector<Ingredient*> side_items;
};

#endif // MOCHA_H