#include "espresso_based.h"

EspressoBased::EspressoBased() {
    name = "";
    ingredients = {};
}

std::vector<Ingredient*>& EspressoBased:: get_ingredients() {
    return ingredients;
}

EspressoBased::EspressoBased(const EspressoBased &esp) {
    name = esp.name;

    for (const auto& i : esp.ingredients) {
        ingredients.push_back(i->clone());
    }
}

EspressoBased::~EspressoBased()
{
    for(const auto& i : ingredients)
        delete i;
    ingredients.clear();
}