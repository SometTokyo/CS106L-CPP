#ifndef ESPRESSO_BASED_H
#define ESPRESSO_BASED_H
#include "ingredient.h"
#include "sub_ingredients.h"
#include <vector>
#include <string>

class EspressoBased
{
public:
    virtual std::string get_name() = 0;
    virtual double price() = 0;

    std::vector<Ingredient*>& get_ingredients();

    virtual ~EspressoBased();

protected:
    EspressoBased();
    EspressoBased(const EspressoBased& esp);
    void operator=(const EspressoBased& esp) = delete;

    std::vector<Ingredient*> ingredients;
    std::string name;

};

#endif // ESPRESSO_BASED_H