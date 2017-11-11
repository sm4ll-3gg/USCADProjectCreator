#include "supportspage.h"
#include "ui_supportspage.h"

SupportsPage::SupportsPage(QWidget *parent) :
    QWizardPage(parent),
    ui(new Ui::SupportsPage)
{
    ui->setupUi(this);
}

SupportsPage::~SupportsPage()
{
    delete ui;
}
