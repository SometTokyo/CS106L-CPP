#include "mocha.h"

Mocha::Mocha(): EspressoBased() {
    this->name = "Mocha";
    ingredients.push_back(new Espresso(2));
    ingredients.push_back(new Milk(2));
    ingredients.push_back(new MilkFoam(1));
    ingredients.push_back(new Chocolate(1));
}

Mocha::Mocha(const Mocha& mocha) : EspressoBased(mocha) {
    for (auto& i : mocha.side_items) {
        side_items.push_back(i->clone());
    }
}

void Mocha::operator=(const Mocha &cap) {
    if (this == &cap){
        return;
    }

    for (const auto& i : side_items) {
        delete i;
    }
    side_items.clear();

    for(const auto& i : ingredients)
        delete i;
    ingredients.clear();

    for (const auto& i : cap.ingredients) {
        ingredients.push_back(i->clone());
    }

    for (const auto& i : cap.side_items) {
        side_items.push_back(i->clone());
    }

    name = cap.name;
}

std::string Mocha::get_name() {
    return this->name;
}

double Mocha::price() {
    double price = 0;

    for (const auto& i : ingredients) {
        price += i->price();
    }

    for (const auto& i : side_items) {
        price += i->price();
    }

    return price;
}

void Mocha::add_side_item(Ingredient *side) {
    side_items.push_back(side);
}

std::vector<Ingredient *> &Mocha::get_side_items() {
    return side_items;
}

void Mocha::brew() {

}

Mocha::~Mocha()
{
    for(const auto& i : side_items)
        delete i;
    side_items.clear();
}