#ifndef LEFTOVER_TRACKER_H
#define LEFTOVER_TRACKER_H

#include <vector>
#include "LeftoverRecord.h"
#include "LeftoverReport.h"
using namespace std;

class LeftoverTracker {
private:
    vector<LeftoverRecord> leftoverRecords;

public:
    void addRecord(const LeftoverRecord& record);
    const vector<LeftoverRecord>& getRecords() const;
    LeftoverReport getLeftoverReport() const;
};

#endif // LEFTOVER_TRACKER_H
