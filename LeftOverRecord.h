#ifndef LEFTOVER_RECORD_H
#define LEFTOVER_RECORD_H

#include <string>
using namespace std;

class LeftoverRecord {
private:
    string date;
    string meal;
    string foodName;
    int quantity;
    string leftoverReason;
    string disposalMechanism;
    double cost;

public:
    // Constructor
    LeftoverRecord(string d, string m, string f, int q, string lr, string dm, double c);

    // Accessors
    string getDate() const;
    string getMeal() const;
    string getFoodName() const;
    int getQuantity() const;
    string getLeftoverReason() const;
    string getDisposalMechanism() const;
    double getCost() const;

    // Mutators
    void setDate(const string& d);
    void setMeal(const string& m);
    void setFoodName(const string& f);
    void setQuantity(int q);
    void setLeftoverReason(const string& lr);
    void setDisposalMechanism(const string& dm);
    void setCost(double c);
};

#endif // LEFTOVER_RECORD_H
