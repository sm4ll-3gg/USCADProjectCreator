#ifndef LOADSPAGE_H
#define LOADSPAGE_H

#include <QWizardPage>

namespace Ui {
class LoadsPage;
}

class LoadsPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit LoadsPage(QWidget *parent = 0);
    ~LoadsPage();

private:
    Ui::LoadsPage *ui;
};

#endif // LOADSPAGE_H
