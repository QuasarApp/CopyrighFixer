//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#include "signer.h"
#include "CopyrighFixer/ifilemanager.h"

namespace CopyrighFixer {
Signer::Signer() {

}

bool Signer::checkSign(const Config &objConf) {
    return true;
}

IFileManager *Signer::searchFileByExt(const QString &extension) {

    for (auto itemFM: FileManager) {

        if (itemFM && itemFM->isSupport(itemFM->toExtension(extension))) {
            return itemFM;
        }


    }
    return nullptr;
}

}
