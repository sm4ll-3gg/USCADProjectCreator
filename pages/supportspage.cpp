#include "supportspage.h"
#include "ui_supportspage.h"

#include "QVBoxLayout"

SupportsPage::SupportsPage(QWidget *parent) :
    QWizardPage(parent)
{
    setTitle("Определение опор конструкции");
    setSubTitle("Введите кинематические ограничения (опоры) для узлов конструкции");

    dataWgt = new DataInputWidget(this);
    dataWgt->setDescription("Node - номер узла, к которому относится опора\nType - тип опоры");

    dataWgt->setColumnCount(columnCount);
    dataWgt->setTableHeaders(headers);

    //wgt->setDelegate();

    QVBoxLayout* layout = new QVBoxLayout{};
    layout->addWidget(dataWgt);

    setLayout(layout);
}
