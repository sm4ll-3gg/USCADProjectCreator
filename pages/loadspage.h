#ifndef LOADSPAGE_H
#define LOADSPAGE_H

#include "abstractpage.h"

class LoadsPage : public AbstractPage
{
    Q_OBJECT

public:
    explicit LoadsPage(QWidget *parent = 0);
    ~LoadsPage() {}
};

#endif // LOADSPAGE_H
