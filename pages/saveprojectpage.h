#ifndef SAVEPROJECTPAGE_H
#define SAVEPROJECTPAGE_H

#include <QWizardPage>

namespace Ui {
class SaveProjectPage;
}

class SaveProjectPage : public QWizardPage
{
    Q_OBJECT

public:
    explicit SaveProjectPage(QWidget *parent = 0);
    ~SaveProjectPage();

protected slots:
    bool    validatePage() override;

private slots:
    void    selectProjectPath();

private:
    Ui::SaveProjectPage *ui;

    QString path{""};
};

#endif // SAVEPROJECTPAGE_H
