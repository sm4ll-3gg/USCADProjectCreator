#include "loadspage.h"
#include "ui_loadspage.h"

LoadsPage::LoadsPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::LoadsPage)
{
    ui->setupUi(this);
}

LoadsPage::~LoadsPage()
{
    delete ui;
}
