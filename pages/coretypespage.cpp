#include "coretypespage.h"
#include "ui_coretypespage.h"

CoreTypesPage::CoreTypesPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::CoreTypesPage)
{
    ui->setupUi(this);
}

CoreTypesPage::~CoreTypesPage()
{
    delete ui;
}
