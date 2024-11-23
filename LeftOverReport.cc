#include "LeftoverReport.h"

// Default Constructor
LeftoverReport::LeftoverReport() {}

// Parameterized Constructor
LeftoverReport::LeftoverReport(const vector<LeftoverRecord>& records) : leftoverRecords(records) {}

// Member Functions
double LeftoverReport::getTotalFoodWasteCost() const {
    double totalCost = 0.0;
    for (const auto& record : leftoverRecords) {
        totalCost += record.getCost();
    }
    return totalCost;
}

string LeftoverReport::getMostCommonWastedFood() const {
    map<string, int> foodCount;
    for (const auto& record : leftoverRecords) {
        foodCount[record.getFoodName()] += record.getQuantity();
    }
    return max_element(foodCount.begin(), foodCount.end(),
                       [](const auto& a, const auto& b) { return a.second < b.second; })
        ->first;
}

string LeftoverReport::getWasteProducingMeal() const {
    map<string, int> mealCount;
    for (const auto& record : leftoverRecords) {
        mealCount[record.getMeal()] += record.getQuantity();
    }
    return max_element(mealCount.begin(), mealCount.end(),
                       [](const auto& a, const auto& b) { return a.second < b.second; })
        ->first;
}

string LeftoverReport::getMostCommonLeftoverReason() const {
    map<string, int> reasonCount;
    for (const auto& record : leftoverRecords) {
        reasonCount[record.getLeftoverReason()]++;
    }
    return max_element(reasonCount.begin(), reasonCount.end(),
                       [](const auto& a, const auto& b) { return a.second < b.second; })
        ->first;
}

string LeftoverReport::getMostCommonDisposalMechanism() const {
    map<string, int> disposalCount;
    for (const auto& record : leftoverRecords) {
        disposalCount[record.getDisposalMechanism()]++;
    }
    return max_element(disposalCount.begin(), disposalCount.end(),
                       [](const auto& a, const auto& b) { return a.second < b.second; })
        ->first;
}

string LeftoverReport::getLeftoverReductionStrategy() const {
    return "Implement portion control and repurpose leftovers into new meals.";
}

    string getLeftoverReductionStrategy() const {
        return "Implement portion control and repurpose leftovers into new meals.";
    }
};
