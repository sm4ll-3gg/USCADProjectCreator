#ifndef SUPPORTSPAGE_H
#define SUPPORTSPAGE_H

#include "abstractpage.h"

class SupportsPage : public AbstractPage
{
    Q_OBJECT

    Q_PROPERTY(int supportsCount MEMBER supportsCount)

public:
    explicit SupportsPage(QWidget *parent = 0);
    ~SupportsPage() {}

protected:
    void    initializePage() override;

    bool    validatePage() override;

private:
    int supportsCount;
};

#endif // SUPPORTSPAGE_H
