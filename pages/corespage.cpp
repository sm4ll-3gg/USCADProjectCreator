#include "corespage.h"
#include "ui_corespage.h"

#include "QVBoxLayout"

CoresPage::CoresPage(QWidget *parent) :
    QWizardPage(parent)
{
    setTitle("Определение стержней конструкции");
    setSubTitle("Введите данные о необходимых стержнях конструкции в таблицу ниже");

    dataWgt = new DataInputWidget(this);
    dataWgt->setDescription("NBegin и NEnd - номера узлов начала и конца стержня соответственно\n"
                            "Type - номер типа стержня, определенный ранее");

    dataWgt->setColumnCount(columnCount);
    dataWgt->setTableHeaders(headers);

    //wgt->setDelegate();

    QVBoxLayout* layout = new QVBoxLayout{};
    layout->addWidget(dataWgt);

    setLayout(layout);
}

CoresPage::~CoresPage()
{}
