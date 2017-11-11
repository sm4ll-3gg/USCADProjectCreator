#include "nodespage.h"
#include "ui_nodespage.h"

NodesPage::NodesPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::NodesPage)
{
    ui->setupUi(this);
}

NodesPage::~NodesPage()
{
    delete ui;
}
