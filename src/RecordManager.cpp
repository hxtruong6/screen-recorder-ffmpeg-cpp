//
// Created by hxtruong on 1/21/20.
//

#include "../include/RecordManager.h"

int RecordManager::NextIdRecord = 0;
int RecordManager::MaxRecordProcess = 1;

RecordManager::RecordManager(int maxRecordProcess) {
//    RecordManager::NextIdRecord = 0;
    NextIdRecord = 0;
    if (maxRecordProcess > 0) {
        MaxRecordProcess = maxRecordProcess;
    }
}

//int RecordManager::RegisterRecordProcess(ScreenRecord screenRecord) {
//    if (NextIdRecord < MaxRecordProcess) {
//        return ++NextIdRecord;
//    }
//    return -1;
//}