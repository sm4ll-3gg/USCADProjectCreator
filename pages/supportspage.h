#ifndef SUPPORTSPAGE_H
#define SUPPORTSPAGE_H

#include <QWizardPage>

namespace Ui {
class SupportsPage;
}

class SupportsPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit SupportsPage(QWidget *parent = 0);
    ~SupportsPage();

private:
    Ui::SupportsPage *ui;
};

#endif // SUPPORTSPAGE_H
