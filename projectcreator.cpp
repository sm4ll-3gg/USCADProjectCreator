#include "projectcreator.h"
#include "ui_projectcreator.h"

#include "pages/auxiliary_classes/datainputwidget.h"

ProjectCreator::ProjectCreator(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::ProjectCreator)
{
    ui->setupUi(this);
}

ProjectCreator::~ProjectCreator()
{
    delete ui;
}
