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

protected slots:
    bool    validatePage() override;

private:
    int coreTypesCount{0};
};

#endif // CORETYPESPAGE_H
