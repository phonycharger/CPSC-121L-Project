#include "LeftoverRecord.h"
LeftoverRecord::LeftoverRecord(string d, string m, string f, int q, string lr, string dm, double c)
    : date(d), meal(m), foodName(f), quantity(q), leftoverReason(lr), disposalMechanism(dm), cost(c) {}

// Accessors
string LeftoverRecord::getDate() const { return date; }
string LeftoverRecord::getMeal() const { return meal; }
string LeftoverRecord::getFoodName() const { return foodName; }
int LeftoverRecord::getQuantity() const { return quantity; }
string LeftoverRecord::getLeftoverReason() const { return leftoverReason; }
string LeftoverRecord::getDisposalMechanism() const { return disposalMechanism; }
double LeftoverRecord::getCost() const { return cost; }

// Mutators
void LeftoverRecord::setDate(const string& d) { date = d; }
void LeftoverRecord::setMeal(const string& m) { meal = m; }
void LeftoverRecord::setFoodName(const string& f) { foodName = f; }
void LeftoverRecord::setQuantity(int q) { quantity = q; }
void LeftoverRecord::setLeftoverReason(const string& lr) { leftoverReason = lr; }
void LeftoverRecord::setDisposalMechanism(const string& dm) { disposalMechanism = dm; }
void LeftoverRecord::setCost(double c) { cost = c; }
