#ifndef CORESPAGE_H
#define CORESPAGE_H

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
    Ui::CoresPage *ui;
};

#endif // CORESPAGE_H
