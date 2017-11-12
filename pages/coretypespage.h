#ifndef CORETYPESPAGE_H
#define CORETYPESPAGE_H

#include "abstractpage.h"

class CoreTypesPage : public AbstractPage
{
    Q_OBJECT

    Q_PROPERTY(int coreTypesCount MEMBER coreTypesCount)

public:
    explicit CoreTypesPage(QWidget *parent = 0);
    ~CoreTypesPage() {}

private:
    int coreTypesCount{0};
};

#endif // CORETYPESPAGE_H
