#ifndef CORETYPESPAGE_H
#define CORETYPESPAGE_H

#include "auxiliary_classes/datainputwidget.h"

#include <QWizardPage>

class CoreTypesPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit CoreTypesPage(QWidget *parent = 0);
    ~CoreTypesPage();

private:
    DataInputWidget*    dataWgt;

    const int           columnCount = 3;
    const QStringList   headers{"E", "A", "S"};
};

#endif // CORETYPESPAGE_H
