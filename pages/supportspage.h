#ifndef SUPPORTSPAGE_H
#define SUPPORTSPAGE_H

#include "auxiliary_classes/datainputwidget.h"

#include <QWizardPage>

namespace Ui {
class SupportsPage;
}

class SupportsPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit SupportsPage(QWidget *parent = 0);
    ~SupportsPage() {}

private:
    DataInputWidget*    dataWgt;

    const int           columnCount = 2;
    const QStringList   headers{"Node", "Type"};
};

#endif // SUPPORTSPAGE_H
