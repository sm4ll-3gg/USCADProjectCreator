#include "loadspage.h"

#include <QVBoxLayout>

LoadsPage::LoadsPage(QWidget *parent) :
    QWizardPage(parent)
{
    setTitle("Определение нагрузок");
    setSubTitle("Введите данные о нагрузках");

    dataWgt = new DataInputWidget(this);
    dataWgt->setDescription("Index - номер узла(если нагрузка сосредоточенная) или "
                            "стержня(если нагрузка распределенная), к которому приложена нагрузка"
                            "\nType - тип нагрузки");

    dataWgt->setColumnCount(columnCount);
    dataWgt->setTableHeaders(headers);

    //wgt->setDelegate();

    QVBoxLayout* layout = new QVBoxLayout{};
    layout->addWidget(dataWgt);

    setLayout(layout);
}
