#include "coretypespage.h"

#include <QVBoxLayout>

CoreTypesPage::CoreTypesPage(QWidget *parent) :
    QWizardPage(parent)
{
    setTitle("Определение типов стержней конструкции");
    setSubTitle("Введите данные о необходимых типах стержней конструкции");

    dataWgt = new DataInputWidget(this);
    dataWgt->setDescription("E - модуль упругости\n"
                            "A - площадь сечения\n"
                            "S -допускаемое напряжение");

    dataWgt->setColumnCount(columnCount);
    dataWgt->setTableHeaders(headers);

    //wgt->setDelegate();

    QVBoxLayout* layout = new QVBoxLayout{};
    layout->addWidget(dataWgt);

    setLayout(layout);
}

CoreTypesPage::~CoreTypesPage()
{}
