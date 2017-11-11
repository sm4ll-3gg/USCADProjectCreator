#ifndef CORETYPESPAGE_H
#define CORETYPESPAGE_H

#include <QWizardPage>

namespace Ui {
class CoreTypesPage;
}

class CoreTypesPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit CoreTypesPage(QWidget *parent = 0);
    ~CoreTypesPage();

private:
    Ui::CoreTypesPage *ui;
};

#endif // CORETYPESPAGE_H
