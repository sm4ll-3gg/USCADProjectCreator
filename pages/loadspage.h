#ifndef LOADSPAGE_H
#define LOADSPAGE_H

#include "auxiliary_classes/datainputwidget.h"

#include <QWizardPage>

class LoadsPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit LoadsPage(QWidget *parent = 0);
    ~LoadsPage() {}

private:
    DataInputWidget* dataWgt;

    const int           columnCount = 2;
    const QStringList   headers{"Index", "Type"};
};

#endif // LOADSPAGE_H
