//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#ifndef SIGNER_H
#define SIGNER_H

#include "CopyrighFixer_global.h"
#include "config.h"
#include "CopyrighFixer/ifilemanager.h"

namespace CopyrighFixer {

/**
 * @brief The Signer class
 */
class CopyrighFixer_EXPORT Signer {
public:
    Signer();

    /**
     * @brief checkSign The method that add copyright to all sources files.
     * @param objConf This is a configuration object.
     */
    bool checkSign(const Config &objConf);

    IFileManager *searchFileByExt(const QString &extension);

};

}


#endif // SIGNER_H
