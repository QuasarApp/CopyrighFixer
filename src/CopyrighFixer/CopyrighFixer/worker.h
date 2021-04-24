//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#ifndef WORKER_H
#define WORKER_H

#include "CopyrighFixer_global.h"


namespace CopyrighFixer {

/**
 * @brief The Worker class will be control all work process.
 */
class CopyrighFixer_EXPORT Worker {
public:
    Worker();

    /**
     * @brief runProcessing It is main method for control of all parsing process.
     * @return
     */
    bool runProcessing();


};

}

#endif // WORKER_H