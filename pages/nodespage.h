#ifndef NODESPAGE_H
#define NODESPAGE_H

#include <QWizardPage>

namespace Ui {
class NodesPage;
}

class NodesPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit NodesPage(QWidget *parent = 0);
    ~NodesPage();

private:
    Ui::NodesPage *ui;
};

#endif // NODESPAGE_H
