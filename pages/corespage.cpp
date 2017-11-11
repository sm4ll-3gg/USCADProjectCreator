#include "corespage.h"
#include "ui_corespage.h"

CoresPage::CoresPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::CoresPage)
{
    ui->setupUi(this);
}

CoresPage::~CoresPage()
{
    delete ui;
}
