//
// Created by pukal on 29. 12. 2022.
//

#ifndef DOWNLOADMANAGER_HTTP_H
#define DOWNLOADMANAGER_HTTP_H

#include <string>

int http(std::string web, std::string path, std::string name,int startPoint,bool &stop,long long index, double *allreadyDownloaded,int *totalSize);
#endif //DOWNLOADMANAGER_HTTP_H