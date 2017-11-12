#ifndef CORESPAGE_H
#define CORESPAGE_H

#include "abstractpage.h"

#include <QWizardPage>

class CoresPage : public AbstractPage
{
    Q_OBJECT

    Q_PROPERTY(int coresCount MEMBER coresCount)

public:
    explicit CoresPage(QWidget *parent = 0);
    ~CoresPage() {}

protected slots:
    void    initializePage() override;
    bool    validatePage() override;

private:
    int coresCount{0};
};

#endif // CORESPAGE_H
