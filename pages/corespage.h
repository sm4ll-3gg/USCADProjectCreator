#ifndef CORESPAGE_H
#define CORESPAGE_H

#include "auxiliary_classes/datainputwidget.h"

#include <QWizardPage>

namespace Ui {
class CoresPage;
}

class CoresPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit CoresPage(QWidget *parent = 0);
    ~CoresPage();

private:
    DataInputWidget* dataWgt;

    const int           columnCount = 3;
    const QStringList   headers{"NBegin", "NEnd", "Type"};
};

#endif // CORESPAGE_H
