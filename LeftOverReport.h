#ifndef LEFTOVER_REPORT_H
#define LEFTOVER_REPORT_H

#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include "LeftoverRecord.h"
using namespace std;

class LeftoverReport {
private:
    vector<LeftoverRecord> leftoverRecords;

public:
    // Default Constructor
    LeftoverReport();

    // Parameterized Constructor
    LeftoverReport(const vector<LeftoverRecord>& records);

    // Member Functions
    double getTotalFoodWasteCost() const;
    string getMostCommonWastedFood() const;
    string getWasteProducingMeal() const;
    string getMostCommonLeftoverReason() const;
    string getMostCommonDisposalMechanism() const;
    string getLeftoverReductionStrategy() const;
};

#endif // LEFTOVER_REPORT_H
