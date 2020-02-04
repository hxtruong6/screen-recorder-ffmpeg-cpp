//
// Created by hxtruong on 1/21/20.
//

#ifndef QTTEST_RECORDMANAGER_H
#define QTTEST_RECORDMANAGER_H


#include "ScreenRecord.h"
#include <iostream>

using namespace std;

class RecordManager {
public:
    static int NextIdRecord;
    static int MaxRecordProcess;

    RecordManager(int maxRecordProcess = 0);


//    void InsertRecorder();

    static int RegisterRecordProcess(ScreenRecord screenRecord);
};


#endif //QTTEST_RECORDMANAGER_H
