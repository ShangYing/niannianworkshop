#pragma once

#include "applicationcontroller.h"


class T_CONTROLLER_EXPORT BlogController : public ApplicationController
{
    Q_OBJECT
public:
    BlogController() : ApplicationController() {}

public slots:
    void index();
    void show(const QString &id);
    void create();
    void save(const QString &id);
    void remove(const QString &id);
};

