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

QJsonObject ProjectCreator::serialize() const
{
    QJsonObject obj{};

    obj.insert("nodes", ui->nodesPage->serialize());
    obj.insert("coreTypes", ui->coreTypesPage->serialize());
    obj.insert("cores", ui->coresPage->serialize());
    obj.insert("supports", ui->supportsPage->serialize());
    obj.insert("loads", ui->loadsPage->serialize());

    return obj;
}
