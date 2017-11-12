#ifndef NODESPAGE_H
#define NODESPAGE_H

#include "auxiliary_classes/datainputwidget.h"

#include <QWizardPage>

class NodesPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit NodesPage(QWidget *parent = 0);
    ~NodesPage();

private:
    DataInputWidget*    DataWgt;

    const int           columnCount = 2;
    const QStringList   header{"X", "Y"};
};

#endif // NODESPAGE_H
