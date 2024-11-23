#include "LeftoverTracker.h"

void LeftoverTracker::addRecord(const LeftoverRecord& record) {
    leftoverRecords.push_back(record);
}

const vector<LeftoverRecord>& LeftoverTracker::getRecords() const {
    return leftoverRecords;
}

LeftoverReport LeftoverTracker::getLeftoverReport() const {
    return LeftoverReport(leftoverRecords);
}
