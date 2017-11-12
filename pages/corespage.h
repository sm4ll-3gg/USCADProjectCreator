#ifndef CORESPAGE_H
#define CORESPAGE_H

#include "abstractpage.h"

#include <QWizardPage>

class CoresPage : public AbstractPage
{
    Q_OBJECT

public:
    explicit CoresPage(QWidget *parent = 0);
    ~CoresPage();
};

#endif // CORESPAGE_H
