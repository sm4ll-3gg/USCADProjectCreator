#ifndef SUPPORTSPAGE_H
#define SUPPORTSPAGE_H

#include "abstractpage.h"

class SupportsPage : public AbstractPage
{
    Q_OBJECT

public:
    explicit SupportsPage(QWidget *parent = 0);
    ~SupportsPage() {}
};

#endif // SUPPORTSPAGE_H
