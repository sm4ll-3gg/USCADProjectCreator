#ifndef PROJECTCREATOR_H
#define PROJECTCREATOR_H

#include <QWizard>

namespace Ui {
class ProjectCreator;
}

class ProjectCreator : public QWizard
{
    Q_OBJECT

public:
    explicit ProjectCreator(QWidget *parent = 0);
    ~ProjectCreator();

private:
    Ui::ProjectCreator *ui;
};

#endif // PROJECTCREATOR_H
