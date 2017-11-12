#include "nodespage.h"

#include <QVBoxLayout>

NodesPage::NodesPage(QWidget *parent) :
    QWizardPage(parent)
{
    setTitle("Определение узлов конструкции");
    setSubTitle("Введите данные о необходимых узлах");

    DataWgt = new DataInputWidget(this);
    DataWgt->setDescription("Х и У - координаты узла на плоскости");

    DataWgt->setColumnCount(columnCount);
    DataWgt->setTableHeaders(header);

    //wgt->setDelegate();

    QVBoxLayout* layout = new QVBoxLayout{};
    layout->addWidget(DataWgt);

    setLayout(layout);
}

NodesPage::~NodesPage()
{}
